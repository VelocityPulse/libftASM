section .text
global _ft_toupper

_ft_toupper:
	push rbp
	mov rbp, rsp
	cmp rdi, 97
	jl return
	cmp rdi, 122
	ja return
	add rdi, -32

	return:
		mov rax, rdi
		leave
		ret
