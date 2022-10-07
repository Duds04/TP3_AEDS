all: 
	gcc	Dicionario.c ./headers/Dicionario.h	./headers/ListaPalavras.h	Dicionario.c ListaPalavras.c main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear