#include "stdio.h"
#include "string.h"

int main(int argc, char* argv[])
{
    char test[26];
    printf("%s\n", test);

    for (int i = 0; i < 54; i++) {
        memcpy(test + i, "H", 1);
        i++;
        memcpy(test + i, "E", 1);
        i++;
        memcpy(test + i, "L", 1);
        i++;
        memcpy(test + i, "O", 1);
        i++;
        printf("%s\n", test);
    }

    return 0;
}
