section .text
global _ft_strdup
extern _ft_strlen
extern _ft_memcpy
extern _ft_bzero
extern _malloc

_ft_strdup:
	push rbp
	mov rbp, rsp
	mov r10, rdi ; mov src into r10
	call _ft_strlen
	mov r9, rax ; mov len into r9
	mov rdi, r9
	call malloc
	mov r8, rax ; mov malloc ret in r8
	mov rdi, r8
	mov rsi, r9
	call _ft_bzero ; bzero
	mov rdi, r8
	mov rsi, r10
	mov rdx, r9
	call _ft_memcpy
	leave
	ret


