BITS 64;
section .text
    default rel
    extern printf
    global main
main:
    push rbp

    mov	rdi, fmt
    mov	rsi, message
    mov	rax, 0

    call printf 

    pop	rbp		; Pop stack

    mov	rax,0	; Exit code 0
    ret			; Return
section .data
    message:  db        "Hello, Holberton\n", 10, 0
    fmt:    db "%s", 10, 0
