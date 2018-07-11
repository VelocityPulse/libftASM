section .data
buff_size equ 32
error_unknown:
	.prefix db "cat: ", 0
	.suffix db ": No such file or directory", 10, 0
error_directory:
	.prefix db "cat: ", 0
	.suffix db ": Is a directory", 10, 0

section .bss
buffer resb buff_size

section .text
global _ft_cat
extern _ft_putstr

_ft_cat:
	push rbp
	mov rbp, rsp

	;save parameter
	push rdi

	;try open the file
	mov rax, 0x2000005 ;open
	mov rsi, 0 ;O_RDONLY
	mov rdx, 0 ;no mode
	syscall
	mov r15, rax ;save fd

	;if open fail, error_open
	jc print_error_unknown


	until_finish_file:
		;read file
		mov rax, 0x2000003 ;read
		mov rdi, r15 ;mov fd
		lea rsi, [rel buffer]
		mov rdx, buff_size
		syscall
		mov byte [rsi+rax], 0 ;put 0 on end of buffer

		;if end of file
		cmp rax, 0
		jle return

		;write buffer
		mov rdi, rsi
		call _ft_putstr

		jmp until_finish_file
	mov rax, 0x2000006
	mov rdi, r15
	syscall

	return:
		pop rdi ;clear rdi in stack
		leave
		ret

	print_error_unknown:
		lea rdi, [rel error_unknown.prefix]
		call _ft_putstr
		pop rdi
		call _ft_putstr
		lea rdi, [rel error_unknown.suffix]
		call _ft_putstr
		jmp return

	print_error_directory:
		lea rdi, [rel error_directory.prefix]
		call _ft_putstr
		pop rdi
		call _ft_putstr
		lea rdi, [rel error_directory.suffix]
		call _ft_putstr
		jmp return

