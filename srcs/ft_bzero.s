section .text
global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp
	mov rax, rsi
	while:
		cmp rax, 0
		jl exit
		mov byte[rdi+rsi], 0
		dec rax
		jmp while

	exit:
		leave
		ret


