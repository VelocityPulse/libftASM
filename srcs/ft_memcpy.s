section .text
global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp
	mov rax, 0
	cmp rdx, 0
	je exit
	cmp rdi, rsi
	je exit
	mov r8, rdi ; save rdi
	mov rcx, rdx
	rep movsb
	mov rax, r8

	exit:
		leave
		ret
