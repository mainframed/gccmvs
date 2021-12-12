rem this was mostly obtained by running make -n -f makefile.pdw

del *.o
del pdptest.exe
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o pdosst32.s pdosst32.c
as386 -o pdosst32.o pdosst32.s
del pdosst32.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o pdptest.s pdptest.c
as386 -o pdptest.o pdptest.s
del pdptest.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o stdio.s stdio.c
as386 -o stdio.o stdio.s
del stdio.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o string.s string.c
as386 -o string.o string.s
del string.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o stdlib.s stdlib.c
as386 -o stdlib.o stdlib.s
del stdlib.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o start.s start.c
as386 -o start.o start.s
del start.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o time.s time.c
as386 -o time.o time.s
del time.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o errno.s errno.c
as386 -o errno.o errno.s
del errno.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o assert.s assert.c
as386 -o assert.o assert.s
del assert.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o signal.s signal.c
as386 -o signal.o signal.s
del signal.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o locale.s locale.c
as386 -o locale.o locale.s
del locale.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o ctype.s ctype.c
as386 -o ctype.o ctype.s
del ctype.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o setjmp.s setjmp.c
as386 -o setjmp.o setjmp.s
del setjmp.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o math.s math.c
as386 -o math.o math.s
del math.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o pos.s ../src/pos.c
as386 -o pos.o pos.s
del pos.s
as386 -o support.o ../src/support.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o pdossupc.s pdossupc.c
as386 -o pdossupc.o pdossupc.s
del pdossupc.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o bos.s ../src/bos.c
as386 -o bos.o bos.s
del bos.s
gcc386 -S -Os -fno-common -D__PDOS386__ -D__32BIT__ -I. -I../src -o liballoc.s liballoc.c
as386 -o liballoc.o liballoc.s
del liballoc.s
del pdos.a
ar386 r pdos.a pdosst32.o stdio.o string.o stdlib.o
ar386 r pdos.a start.o time.o errno.o assert.o signal.o
ar386 r pdos.a locale.o ctype.o setjmp.o math.o
ar386 r pdos.a pos.o support.o pdossupc.o bos.o liballoc.o
ld386 -s -e ___pdosst32 -o pdptest.exe pdosst32.o pdptest.o pdos.a
ld386 -r -s -e ___pdosst32 -o pdptest.exe pdosst32.o pdptest.o pdos.a
strip386 --strip-unneeded pdptest.exe
