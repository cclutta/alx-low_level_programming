mov rdi,formatStr 
mov al,0 

extern printf
call printf

ret

formatStr:
	db `Hello, Holberton\n`,0
