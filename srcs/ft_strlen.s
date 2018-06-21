section .text
global _ft_strlen

_ft_strlen:
	push rbp
	mov rbp, rsp
	cmp rdi, 0 ; test if rdi is null
	je exit
	mov ecx, -1 ; set ecx to maximal bit value
	mov al, 0 ; set the char to research
	cld ; init direction flag
	repne scasb ; start the research on the rdi register
	not ecx ; reverse ecx
	lea rax, [ecx - 1] ; get value of ecx without the /0 count
	sub rdi, rax ; reset rdi which was auto increment by repne scasbi

	exit:
		leave
		ret
