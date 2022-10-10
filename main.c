/*#include <stdio.h>
#include <stdlib.h>
#include "./headers/Dicionario.h"
#include "./headers/Palavra.h"

int main()
{
    Dicionario dicionario;
    Dicionario *ptrDicionario = &dicionario;
    printf("\n Rodando programa...\n\n");

    // arquivo de entrada tem que estar na pasta entradas do programa
    // constroiDicionario(ptrDicionario, "./entradas/gabriel.txt");

    // TLetra guarda;
    TLetra x;
    TPalavra b;
    char g;

    PalavraVazia(&b);

    for (int j = 0; j <= 10; j++)
    {
        scanf(" %c", &g);
        Preencher(&b, g);
    }

    printf("Vou taca\n");
    ImprimeCadeia(&b);

    return 0;
}*/