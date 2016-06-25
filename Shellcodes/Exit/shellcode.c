#include <stdio.h>
#include <string.h>

// exit shellcode
char code[] = "\x31\xdb\x31\xc0\xb0\x01\xcd\x80";

int main(int argc, char **argv) {
	printf("\n%s\n\n", "Executing shellcode...");

	int (*exeshell)();
	exeshell = (int (*)()) code;
	(int)(*exeshell)();

	printf("\n%s\n", "Shellcode executed successfully..");
}
