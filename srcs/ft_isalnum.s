section .text
global _ft_isalnum
extern _ft_isdigit
extern _ft_isalpha

_ft_isalnum:
	push rbp
	mov rbp, rsp
	mov rdx, 0
	call _ft_isdigit
	add rdx, rax
	call _ft_isalpha
	add rdx, rax
	mov rax, rdx
	leave
	ret

