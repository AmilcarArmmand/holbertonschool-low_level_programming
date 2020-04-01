section .data
	text db "Hello, Holberton",10,0
	section .text
	global _start

_start:
	mov rdx,rax
	pop rax
	mov rsi, rax
	mov rdi, 1
	mov rax, 1
	int 80h
