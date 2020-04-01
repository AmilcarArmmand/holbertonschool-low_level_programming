section .data

	message db "Hello, Holberton", 10

section .text

global _start
main:

	mov rax, 1 		;message length
	mov rdi, 1 		;message to write
	mov rsi, message 		;file descriptor (stdout)
	mov rdx, 14 		;system call number (sys_write)
	syscall			;call kernel
