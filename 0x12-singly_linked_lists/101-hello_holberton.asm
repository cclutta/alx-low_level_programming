mov rdi,format
mov rsi,strr
mov rax,0 

extern printf
call printf

ret

format:
	db `Hello, Holberton\n`,0
strr:
	db `%s`
