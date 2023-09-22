section .data
hello_holberton db "Hello, Holberton", 10, 0

section .text
global main

extern printf

main:
    
mov rdi, format
    
mov rsi, hello_holberton
   
call printf
 
mov rax, 0x60
xor rdi, rdi
syscall

section .data
format db "%s", 0
