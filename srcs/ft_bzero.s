section .text
global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp
	mov rcx, -1

	while:
		inc rcx
		cmp rcx, rsi
		jae exit
		mov byte[rdi+rcx], 0
		jmp while

	exit:
		leave
		ret


