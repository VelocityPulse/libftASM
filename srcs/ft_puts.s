section .data
nl db 10
s_null db "(null)", 0
s_null_len equ $ - s_null

section .text
global _ft_puts

_ft_puts:
	push rbp
	mov rbp, rsp
	mov rbx, -1
	mov r12, rdi
	cmp r12, 0
	je null
	while:
		inc rbx
		cmp byte [r12+rbx], 0
		je newline
		mov rdi, 1
		lea rsi, [r12+rbx]
		mov rdx, 1
		mov rax, 0x2000004
		syscall
		jmp while

	newline:
		mov rdi, 1
		lea rsi, [rel nl]
		mov rdx, 1
		mov rax, 0x2000004
		syscall
		jmp exit

	null:
		mov rdi, 1
		lea rsi, [rel s_null]
		mov rdx, s_null_len
		mov rax, 0x2000004
		syscall
		jmp newline

	exit:
		leave
		ret
