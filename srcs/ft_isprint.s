section .text
global _ft_isprint

_ft_isprint:
	push rbp
	mov rbp, rsp
	cmp rdi, 32
	jl false
	cmp rdi, 126
	ja false
	mov rax, 1
	leave
	ret

	false:
		mov rax, 0
		leave
		ret
