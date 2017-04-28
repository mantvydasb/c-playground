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
}
