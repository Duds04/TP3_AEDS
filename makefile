all: 
	gcc	Dicionario.c ./headers/Dicionario.h	Palavra.c ./headers/Palavra.h  main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear

art: 
	gcc ./headers/Palavra.h    ./headers/Linhas.h     Linhas.c    Palavra.c     mainTestes.c   -o	exec
	./exec 