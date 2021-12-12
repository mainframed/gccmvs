;
; Released to the public domain by Alexey Frunze.
;

; File: c0dh_jw.asm
;
; Attempt to adapt Smaller C's c0dh.asm from NASM to JWASM.

.model large, C
.386

    public __intstart

    public __lesf2
    public __mulsf3
    public __floatsisf
    public __addsf3
    public __negsf2
    public __gesf2
    public __divsf3
    public __fixsfsi
    public __subsf3

;extrn __start:proc
    extern __start:byte
    extern _start__relot:byte, _stop__relot:byte
    extern _start__relod:byte, _stop__relod:byte
    extern _start__bss:byte, _stop__bss:byte

text segment "CODE"

__intstart:

    ; Get MSDOS version and push ready for start()
    mov ah,30h
    int 21h
    xchg al,ah
    push ax

    ; push PSP ready for calling start()

    xor     eax, eax
    mov     ax, ds
    shl     eax, 4
    push    eax

    ; perform code/data relocations

    call    labnext
labnext:
    xor     ebx, ebx
    mov     bx, cs
    shl     ebx, 4
    xor     eax, eax
    pop     ax
    add     ebx, eax
    sub     ebx, offset labnext ; ebx = base physical address

    mov     esi, offset _start__relot
relo_text_loop:
    cmp     esi, offset _stop__relot
    jae     relo_text_done

    lea     edi, [ebx + esi] ; edi = physical address of a relocation table element

    ror     edi, 4
    mov     ds, di
    shr     edi, 28

    mov     edi, [di]
    add     edi, ebx ; edi = physical address of a dword to which to add ebx and which then to transform into seg:ofs far pointer

    ror     edi, 4
    mov     ds, di
    shr     edi, 28

    mov     eax, [di]
    add     eax, ebx

    shl     eax, 12
    rol     ax, 4

    mov     [di], eax

    add     esi, 4
    jmp     relo_text_loop
relo_text_done:

    mov     esi, offset _start__relod
relo_data_loop:
    cmp     esi, offset _stop__relod
    jae     relo_data_done

    lea     edi, [ebx + esi] ; edi = physical address of a relocation table element

    ror     edi, 4
    mov     ds, di
    shr     edi, 28

    mov     edi, [di]
    add     edi, ebx ; edi = physical address of a dword to which to add ebx

    ror     edi, 4
    mov     ds, di
    shr     edi, 28

    add     [di], ebx ; actual relocation

    add     esi, 4
    jmp     relo_data_loop
relo_data_done:

    ; Init .bss

    push    ebx

    mov     esi, offset _start__bss
    lea     edi, [ebx + esi]
    mov     esi, offset _stop__bss
    lea     ebx, [ebx + esi]
    sub     ebx, edi
    ror     edi, 4
    mov     es, di
    shr     edi, 28
    xor     al, al
    cld

bss1:
    mov     ecx, 32768
    cmp     ebx, ecx
    jc      bss2

    sub     ebx, ecx
    rep     stosb
    and     di, 15
    mov     si, es
    add     si, 2048
    mov     es, si
    jmp     bss1

bss2:
    mov     cx, bx
    rep     stosb

    pop     ebx

    mov     esi, offset term
    lea     eax, [ebx + esi]
    shl     eax, 12
    rol     ax, 4
    push    eax

    mov     esi, offset __start
    lea     eax, [ebx + esi]
    shl     eax, 12
    rol     ax, 4
    push    eax

    retf        ; call __start

term:
    mov     ah, 4ch
    int     21h ; terminate

rt:
    dd      offset rt

__lesf2:
__mulsf3:
__floatsisf:
__addsf3:
__negsf2:
__gesf2:
__divsf3:
__fixsfsi:
__subsf3:
        ret

text ends

_relot segment dword "CONST"
    dd      offset rt ; .relot must exist for __start__relot and __stop__relot to also exist
_relot ends

data segment "DATA"
rd:
    dd      offset rd

banner  db  "PDPCLIB"
data ends

_relod segment dword "CONST"
    dd      offset rd ; .relod must exist for __start__relod and __stop__relod to also exist
_relod ends

_bss segment "BSS"
    ; .bss must exist for __start__bss and __stop__bss to also exist
    dd      ?
_bss ends

end




/*
  Released to the public domain by Alexey Frunze.
*/

// File: x87.c

#ifdef __SMALLER_C_32__

#ifdef __HUGE__
#define __HUGE_OR_UNREAL__
#endif
#ifdef __UNREAL__
#define __HUGE_OR_UNREAL__
#endif

#ifdef __HUGE_OR_UNREAL__
#define xbp "bp"
#define xsp "sp"
#else
#define xbp "ebp"
#define xsp "esp"
#endif

void __x87init(void)
{
  // Mask all exceptions, set rounding to nearest even and precision to 64 bits.
  // TBD??? Actually check for x87???
  asm("fninit");
}

float __floatsisf(int i)
{
  asm
  (
  "fild dword ["xbp"+8]\n"
  "fstp dword ["xbp"+8]\n"
  "mov  eax, ["xbp"+8]"
  );
}

float __floatunsisf(unsigned i)
{
  asm
  (
  "push dword 0\n"
  "push dword ["xbp"+8]\n"
  "fild qword ["xbp"-8]\n" // load 32-bit unsigned int as 64-bit signed int
  "add  "xsp", 8\n"
  "fstp dword ["xbp"+8]\n"
  "mov  eax, ["xbp"+8]"
  );
}

int __fixsfsi(float f)
{
  asm
  (
  "sub    "xsp", 4\n"
  "fnstcw ["xbp"-2]\n" // save rounding
  "mov    ax, ["xbp"-2]\n"
  "mov    ah, 0x0c\n" // rounding towards 0 (AKA truncate) since we don't have fisttp
  "mov    ["xbp"-4], ax\n"
  "fld    dword ["xbp"+8]\n"
  "fldcw  ["xbp"-4]\n" // rounding = truncation
  "fistp  dword ["xbp"+8]\n"
  "fldcw  ["xbp"-2]\n" // restore rounding
  "add    "xsp", 4\n"
  "mov    eax, ["xbp"+8]"
  );
}

unsigned __fixunssfsi(float f)
{
  asm
  (
  "sub    "xsp", 12\n"
  "fnstcw ["xbp"-2]\n" // save rounding
  "mov    ax, ["xbp"-2]\n"
  "mov    ah, 0x0c\n" // rounding towards 0 (AKA truncate) since we don't have fisttp
  "mov    ["xbp"-4], ax\n"
  "fld    dword ["xbp"+8]\n"
  "fldcw  ["xbp"-4]\n" // rounding = truncation
  "fistp  qword ["xbp"-12]\n" // store 64-bit signed int
  "fldcw  ["xbp"-2]\n" // restore rounding
  "mov    eax, ["xbp"-12]\n" // take low 32 bits
  "add    "xsp", 12"
  );
}

float __addsf3(float a, float b)
{
  asm
  (
  "fld  dword ["xbp"+8]\n"
  "fadd dword ["xbp"+12]\n"
  "fstp dword ["xbp"+8]\n"
  "mov  eax, ["xbp"+8]"
  );
}

float __subsf3(float a, float b)
{
  asm
  (
  "fld  dword ["xbp"+8]\n"
  "fsub dword ["xbp"+12]\n"
  "fstp dword ["xbp"+8]\n"
  "mov  eax, ["xbp"+8]"
  );
}

float __negsf2(float f)
{
  asm
  (
  "mov eax, ["xbp"+8]\n"
  "xor eax, 0x80000000"
  );
}

float __mulsf3(float a, float b)
{
  asm
  (
  "fld  dword ["xbp"+8]\n"
  "fmul dword ["xbp"+12]\n"
  "fstp dword ["xbp"+8]\n"
  "mov  eax, ["xbp"+8]"
  );
}

float __divsf3(float a, float b)
{
  asm
  (
  "fld  dword ["xbp"+8]\n"
  "fdiv dword ["xbp"+12]\n"
  "fstp dword ["xbp"+8]\n"
  "mov  eax, ["xbp"+8]"
  );
}

float __lesf2(float a, float b)
{
  asm
  (
  "fld      dword ["xbp"+12]\n"
  "fld      dword ["xbp"+8]\n"
  "fucompp\n"
  "fstsw    ax\n" // must use these moves since we don't have fucomip
  "sahf\n"
  "jnp      .ordered\n"
  "mov      eax, +1\n" // return +1 if either a or b (or both) is a NaN
  "jmp      .done\n"
  ".ordered:\n"
  "jnz      .unequal\n"
  "xor      eax, eax\n" // return 0 if a == b
  "jmp      .done\n"
  ".unequal:\n"
  "sbb      eax, eax\n"
  "jc       .done\n"    // return -1 if a < b
  "inc      eax\n"      // return +1 if a > b
  ".done:"
  );
}

float __gesf2(float a, float b)
{
  asm
  (
  "fld      dword ["xbp"+12]\n"
  "fld      dword ["xbp"+8]\n"
  "fucompp\n"
  "fstsw    ax\n" // must use these moves since we don't have fucomip
  "sahf\n"
  "jnp      .ordered\n"
  "mov      eax, -1\n" // return -1 if either a or b (or both) is a NaN
  "jmp      .done\n"
  ".ordered:\n"
  "jnz      .unequal\n"
  "xor      eax, eax\n" // return 0 if a == b
  "jmp      .done\n"
  ".unequal:\n"
  "sbb      eax, eax\n"
  "jc       .done\n"    // return -1 if a < b
  "inc      eax\n"      // return +1 if a > b
  ".done:"
  );
}

#endif
