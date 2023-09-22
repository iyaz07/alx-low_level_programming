section .data
    hello db 'Hello, Holberton', 10, 0

section .text
    extern printf
    global main

main:
    ; Print the string
    mov rdi, hello
    call printf

    ; Exit
    mov eax, 0        ; Return 0
    ret

