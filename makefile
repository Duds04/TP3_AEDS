all: 
	gcc ./headers/Palavra.h	./headers/Linhas.h	./headers/ListaPalavras.h	./headers/Dicionario.h		Linhas.c	Palavra.c	ListaPalavras.c	Dicionario.c  main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear