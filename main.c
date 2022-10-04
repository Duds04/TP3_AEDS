#include <stdio.h>
#include <stdlib.h>
#include "./headers/Dicionario.h"

int main(){
    Dicionario dicionario;
    Dicionario* ptrDicionario = &dicionario;
    printf("\n Rodando programa...\n\n");

    // arquivo de entrada tem que estar na pasta entradas do programa
    constroiDicionario(ptrDicionario, "./entradas/gabriel.txt"); 

    return 0;
}