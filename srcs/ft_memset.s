section .text
global _ft_memset

_ft_memset:
	push rbp
	mov rbp, rsp
	mov r8, rdi ; save rdi
	mov ecx, [rsi] ; mov len
	mov ds, rdx ; mov char to set
	std
	rep stosb
	mov rax, r8
	leave
	ret


