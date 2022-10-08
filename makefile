all: 
	gcc ./headers/Palavra.h	./headers/Linhas.h	./headers/Dicionario.h	Linhas.c	Palavra.c	Dicionario.c  main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear

run:
	gcc	Dicionario.c ./headers/Dicionario.h	./headers/ListaPalavras.h	./headers/Linhas.h	./headers/ListaPalavras_TADcelula.h	./headers/Palavra.h	Linhas.c	Palavra.c	Dicionario.c ListaPalavras.c main.c	-o	exec
		./exec 