section .text
global ft_isdigit

ft_isdigit:
	push rbp
	mov rbp, rsp
	cmp rdi, 48
	jl false
	cmp rdi, 57
	jg false
	mov rax, 1
	leave
	ret

false:
	mov rax, 0
	leave
	ret
