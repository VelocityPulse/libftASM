section .text
global _ft_isalpha

_ft_isalpha:
	push rbp
	mov rbp, rsp
	cmp rdi, 65
	jl false
	cmp rdi, 90
	jle true
	cmp rdi, 97
	jl false
	cmp rdi, 122
	jle true

	false:
		mov rax, 0
		leave
		ret
	true:
		mov rax, 1
		leave
		ret
