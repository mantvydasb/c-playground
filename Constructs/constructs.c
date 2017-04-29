#include <stdio.h>

int main() {
    int a = 5;
    
    switch(a) {
        case 1: {
            printf("First\n");
            break;
        }
        case 2: {
            printf("Second\n");
            break;
        }
        case 5: {
            printf("Fifth\n");
            break;
        }
    }


    for (int i = 69; i < 100; i++) {
        printf("Iteration: %d\n", i);
    }


    int b = 0;
    int i = 0;
    while (i < 20) {
        printf("Iteration: %d\n", i);
        i++;
    }
}
