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
    // ConstroiDicionario(ptrDicionario, "./entradas/gabriel.txt");

    TPalavra guarda;
    char g;

    LPalavraVazia(&guarda);

    for (int j = 0; j < 5; j++)
    {
        scanf(" %c", &g);
        LPreencherPalavra(&guarda, g);
    }

    LImprimeCadeia(&guarda);

    printf("\n1");
    InicializaDicionario(ptrDicionario);

    printf("\n2\n");
    pCelulaDicionario pAux;
    pAux = ptrDicionario->pPrimeiro;

    printf("\n3\n");
    CriaListasPorLetra(ptrDicionario);
    LPInsereFinal(&(pAux->Lista), &guarda); // dando pau



    /* TLetra guarda;
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
     LImprimeCadeia(&b);*/

    return 0;
}