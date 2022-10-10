all: 
	gcc	Dicionario.c ./headers/Dicionario.h	Palavra.c ./headers/Palavra.h  main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear
