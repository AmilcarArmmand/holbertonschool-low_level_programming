section .data
	text db "Hello, Holberton",10,0
	text2 db "World?",10,0
	section .text
	global _start

_start:
	mov rax, text
	call _write
	mov rax, text2
	syscall _write

	mov rax, 60
	mov rdi, 0
	syscall
