section .data
buff_size dq 32

section .bss
buffer resb 32

section .text
global _ft_cat
extern _ft_putstr

_ft_cat:
	push rbp
	mov rbp, rsp

	;try open the file
	mov rax, 0x2000005 ;open
	mov rsi, 0 ;O_RDONLY
	mov rdx, 0 ;no mode
	syscall
	
	;if open fail, return
	cmp rax, 2
	je return
	cmp rax, 0
	je return
	mov r8, rax ;save fd
	;push r8

	until_finish_file:
		;read file
		mov rax, 0x2000003 ;read
		mov rdi, r8
		mov rsi, buffer
		mov rdx, buff_size
		syscall
		mov byte [rsi+rax], 0 ;put 0 on end of buffer

		;write buffer
		mov rdi, rsi
		call _ft_putstr
		
		;if end of file
		cmp rax, 0
		jle return
		;else
		jmp until_finish_file


	return:
	leave
	ret






































; todo think to close file
