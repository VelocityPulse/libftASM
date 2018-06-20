section .text
global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp
	mov rcx, rsi
	while:
		cmp rcx, 0
		jl exit
		mov word[rdi+rcx], 0
		dec rcx
		jmp while

	exit:
		leave
		ret


