section .text
global _ft_isascii

_ft_isascii:
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	jl false
	cmp rdi, 127
	ja false
	mov rax, 1
	leave ret

	false:
		mov rax, 0
		leave
		ret
