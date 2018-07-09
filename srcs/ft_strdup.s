section .text
global _ft_strdup
extern _ft_strlen
extern _ft_memcpy
extern _ft_bzero
extern _malloc

_ft_strdup:
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	je error
	mov r13, rdi ; mov src into r13
	call _ft_strlen
	inc rax
	mov r9, rax ; mov len into r9
	mov rdi, r9
	push r9
	push r13
	call _malloc
	pop r13
	pop r9
	cmp rax, 0
	je error
	mov r8, rax ; mov malloc ret in r8
	mov rdi, r8
	mov rsi, r9
	call _ft_bzero ; bzero
	dec r9 ; dec len of src for keep a 0 on the end of dst
	push r8
	mov rdi, r8
	mov rsi, r13
	mov rdx, r9
	call _ft_memcpy
	pop rax
	leave
	ret

	error:
		mov rax, 0x0
		leave
		ret


