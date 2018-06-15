section .text
global _ft_tolower

_ft_tolower:
	push rbp
	mov rbp, rsp
	cmp rdi, 65
	jl return
	cmp rdi, 90
	ja return
	add rdi, 32

	return:
		mov rax, rdi
		leave
		ret

