mov rdi,format
mov rsi,Str
mov al,0 

extern printf
call printf

ret

format:
	db `Hello, Holberton\n`,0
Str:
	db `%s`
