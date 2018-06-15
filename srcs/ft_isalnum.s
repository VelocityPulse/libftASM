section .text
extern ft_isalnum
extern ft_isalpha
global _ft_isalnum

_ft_isalnum:
	push rbp
	mov rbp, rsp
	mov rdx, 0
	call ft_isalnum
	add rdx, rax
	call ft_isalpha
	add rdx, rax
	mov rax, rdx
	leave
	ret

