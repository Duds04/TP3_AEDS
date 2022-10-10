#include <stdio.h>
#include <stdlib.h>
#include "Palavra.h"

typedef struct Celula_LP *PointerCelula;

typedef struct Celula_LP{

    TPalavra ItemPalavra;

    struct Celula_LP* pProx; // Ponteiro para próxima celula

}TCelula;


typedef struct{

    PointerCelula pPrimeiro;     // Ponteiro para primeiro da lista de palavras no heap
    PointerCelula pUltimo;       // Ponteiro para ultimo da lista de palavras no heap
    
}TListaDePalavras;

/*  Cabeçalho das funções Lista de palavras    */

int LPIniciaLista(TListaDePalavras *pLista);
int LPInsereFinal(TListaDePalavras *pLista, TPalavra *palavra);
int LPNumeroPalavras(TListaDePalavras *pLista);
int LPVerificaPalavra(TListaDePalavras *pLista, TPalavra palavra);
void LImprimeListaPalavra(TListaDePalavras* pLista);
int RemovePalavraFinal(TListaDePalavras *pLista);
