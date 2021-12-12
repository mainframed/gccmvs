#!/bin/bash

if [ -f pdplinux.a ]; then rm -rf pdplinux.a; fi
if [ -f watcom.lib ]; then rm -rf watcom.lib; fi

if [ -f pdptest ]; then rm -rf pdptest; fi
if [ -f pdptest.exe ]; then rm -rf pdptest.exe; fi

for f in *.o; do rm -rf *.o; done
for f in *.obj; do rm -rf *.obj; done

make -f makefile.lnx
