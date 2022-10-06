all: 
	gcc	Dicionario.c ./headers/Dicionario.h	./prototipo/CelulaString.h	./prototipo/String.h	./prototipo/String.c main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear