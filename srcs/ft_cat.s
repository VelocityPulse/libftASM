section .data
buff_size equ 32

section .bss
buffer resb buff_size

section .text
global _ft_cat
extern _ft_putstr

_ft_cat:
	push rbp
	mov rbp, rsp
	mov r15, rdi ;save fd
	cmp r15, 0
	jl return

	until_finish_file:
		;read file
		mov rax, 0x2000003
		mov rdi, r15 ;mov fd
		lea rsi, [rel buffer]
		mov rdx, buff_size
		syscall
		mov byte [rsi+rax], 0 ;put 0 on end of buffer

		;if end of file
		jc return
		cmp rax, 0
		jle return

		;write buffer
		mov rdi, rsi
		call _ft_putstr

		jmp until_finish_file

	return:
		leave
		ret
