global main
extern printf

_main:
push message
call printf
mov adi, format
format: db'hello, Holberton\n',0

