#!/bin/sh
KERNEL=build/helloworld_kvm-x86_64.dbg
qemu-system-x86_64 -m 2G --enable-kvm -kernel $KERNEL --nographic --append "$1"
#-monitor telnet:127.0.0.1:55555,server,nowait;
