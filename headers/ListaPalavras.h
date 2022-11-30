#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Palavra.h"
#define InicioArranjo 0
#define MaxTam 1000

typedef struct Celula_LP{
    TPalavra ItemPalavra;
} TCelulaPalavras;

typedef struct{
    TCelulaPalavras lPalavra[MaxTam];
    int primeiro, ultimo;
} TListaDePalavras;

/*  Cabeçalho das funções Lista de palavras    */

int LPIniciaLista(TListaDePalavras *pLista);
int LPInsereFinal(TListaDePalavras *pLista, TPalavra *palavra, int linha);
int LPNumeroPalavras(TListaDePalavras *pLista);
int LPVerificaPalavra(TListaDePalavras *pLista, TPalavra *palavra, int linha);
void LImprimeListaPalavra(TListaDePalavras* pLista);
int RemovePalavraFinal(TListaDePalavras *pLista);
int RemovePalavraDada(TListaDePalavras *pLista, char *palavra);
