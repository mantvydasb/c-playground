#include<stdio.h>

CanNeverExecute() {
        printf("I can never execute\n");
        exit(0);
}

GetInput(int a, int b) {
        int c = 0x33;
        char buffer[8];
        gets(buffer);
        puts(buffer);
}

main() {
        GetInput(0x55, 0x44);
        return 0;
}

// python -c 'print "x"*12 + "getReturnAddress(CanNeverExecute)"' | overflow.exe