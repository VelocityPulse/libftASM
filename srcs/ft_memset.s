section .text
global _ft_memset

_ft_memset:
	push rbp
	mov rbp, rsp
	mov r8, rdi ; save rdi
	mov rax, rsi ; mov len
	mov rcx, rdx ; mov char to set
	cld
	rep stosb
	mov rax, r8
	leave
	ret


