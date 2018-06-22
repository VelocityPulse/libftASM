section .text
global _ft_strlen

_ft_strlen:
	push rbp
	mov rbp, rsp
	mov r8, rdi ; save rdi
	cmp rdi, 0 ; test if rdi is null
	je exit
	mov ecx, -1 ; set ecx to maximal bit value
	mov al, 0 ; set the char to research
	cld ; init direction flag
	repne scasb ; start the research on the rdi register
	not ecx ; reverse ecx
	lea rax, [ecx - 1] ; get value of ecx without the /0 count
	mov rdi, r8 ; reset rdi which was auto increment by repne scasbi

	exit:
		leave
		ret
