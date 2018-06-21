section .text
global _ft_strlen

_ft_strlen:
	push rbp
	mov rbp, rsp
	mov rcx, -1
	while:
		inc rcx
		cmp word [rdi+rcx], 0
		je exit
		jmp while

	exit:
		mov rax, rcx
		leave
		ret
