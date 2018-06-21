section .text
global _ft_strcat
extern _ft_strlen

_ft_strcat:
	push rbp
	mov rbp, rsp
	call _ft_strlen
	mov rdx, rax ; rdx get end len of s1
	mov rcx, 0 ; rcx is the index of s2
	while:
		cmp byte [rsi+rcx], 0
		je exit
		mov r8,  [rsi+rcx]
		mov  [rdi+rdx], r8
		inc rcx
		inc rdx
		jmp while

	exit:
		mov rax, rdi
		leave
		ret
