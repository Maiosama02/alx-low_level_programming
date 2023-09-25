extern printf
section .text
	global main

main:
	push rbp
	mov rbp, rsp
	mov rdi, msg
	mov rax, 0

	call printf
	mov rsp, rbp
	pop rbp

	mov rax, 0
	ret

section .data

	msg: db "Hello, Holberton", 10, 0
