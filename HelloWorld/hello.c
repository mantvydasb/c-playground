#include <stdio.h>

// 0040051a - start

void function2(int a, int b, int c) {
    char* d = "Antras Mantvydas Baranauskas\n";
    printf(d);
}

int main(int argc, char *argv[]) {

    printf("argc: %d\n", argc);

    for (int i=0; i < argc; i++) {
        printf("arg %d / %p is: %s\n", i, argv[i], argv[i]);
    }

    int a = 0x55555555;
    int b = 0x11111111;
    int c = 0x22222222;
    int d = 0x33333333;
    int e = 0x41414141;
    
    if (a != 0) {
        char* m = "Ifas viduje";
        printf(m);
    }

    int balance[5] = {55, 55, 55, 66, 77};
        
    char* n = "Mantvydas Baranauskas\n";
    
    printf(n);
    function2(1, 2, 3);

    return 55;    
}

