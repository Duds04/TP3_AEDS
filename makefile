all: 
	gcc	Dicionario.c ./headers/Dicionario.h main.c	-o	exec
	./exec 
clean:
	rm -rf *.o ./exec
	clear