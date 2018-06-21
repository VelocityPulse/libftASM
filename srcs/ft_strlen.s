section .text
global _ft_strlen

_ft_strlen:
	push rbp
	mov rbp, rsp
	mov ecx, -1
	mov al, 0
	cld
	repne scasb
	not ecx

	exit:
		lea rax, [ecx - 1]
		leave
		ret
