#include <stdio.h>
#include <stdlib.h>
#include "./headers/Dicionario.h"
// #include "./headers/Palavra.h"

int main()
{
    Dicionario dicionario;
    Dicionario *ptrDicionario = &dicionario;
    printf("\n Rodando programa...\n\n");

    // arquivo de entrada tem que estar na pasta entradas do programa
    AnalisaArquivo(ptrDicionario, "./entradas/gabriel.txt");

    // TLetra guarda;
    // TLetra x;
    // TPalavra b;
    // char g;

    // LPalavraVazia(&b);

    // for (int j = 0; j < 5; j++)
    // {
    //     scanf(" %c", &g);
    //     LPreencherPalavra(&b, g);
    // }

    // printf("Vou taca\n");
    // LImprimeCadeia(&b);

    // LDeletaTudo(&b);
    // LImprimeCadeia(&b);

    return 0;
}