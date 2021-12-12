CC=smlrc
COPTS=-huge -I .

pdptest.exe: smlstart.obj pdptest.obj stdio.obj string.obj stdlib.obj \
       start.obj time.obj errno.obj assert.obj signal.obj locale.obj \
       ctype.obj setjmp.obj math.obj pdossupc.obj ../src/pos.obj \
       ../src/support.obj
  smlrl -huge -entry ___intstart -o pdptest.exe pdptest.obj smlstart.obj stdio.obj string.obj stdlib.obj start.obj time.obj errno.obj assert.obj signal.obj locale.obj ctype.obj setjmp.obj math.obj pdossupc.obj ../src/pos.obj ../src/support.obj

.c.obj:
  pdcc -E -D__SMALLERC__ -I . -I ../src -o $*.e $<
  $(CC) $(COPTS) $*.e $*.s
  rm -f $*.e
  nasm -f elf32 $*.s -o $*.obj
  rm -f $*.s

.asm.obj:
  jwasm -q -elf -Dmemodel=large -DSMALLERC -Fo$*.obj $<
