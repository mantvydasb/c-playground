// buffer overflow.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
#include "string.h"

void foo(const char* input)
{
    char buf[10];

    printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n\n\n");

    strcpy(buf, input);
    printf("%s\n", buf);

    printf("Now the stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
}

void bar(void)
{
    printf("Augh! I've been hacked!\n");
}

int main(int argc, char* argv[])
{
    //Blatant cheating to make life easier on myself
    printf("Address of foo = %p\n", foo);
    printf("Address of bar = %p\n", bar);

	if (argc != 2) {
        printf("Please supply a string as an argument!\n");
        return -1;
	}

	foo(argv[1]);
    return 1;
}
