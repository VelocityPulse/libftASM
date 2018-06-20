section .text
global _ft_puts

_ft_puts:
	push rbp
	mov rbp, rsp
	mov rbx, -1
	mov r12, rdi
	mov rdx, 1
	while:
		inc rbx
		cmp word [r12+rbx], 0
		je exit
		mov rdi, 1
		lea rsi, [r12+rbx]
		mov rdx, 1
		mov rax, 0x2000004
		syscall
		jmp while

	exit:
		leave
		ret
