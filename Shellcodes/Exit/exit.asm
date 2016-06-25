[SECTION .text]
global _start
_start:
    ; mov ebx,0
    xor ebx,ebx
    mov al,1
    ; mov eax,1
    int 0x80
