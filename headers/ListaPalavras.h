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

int LP_Inicia_Lista(TListaDePalavras *pLista);
int LP_InsereFinal(TListaDePalavras *pLista, TPalavra palavra);
int LP_Numero_de_palavras(TListaDePalavras *pLista);
int LP_VerificaPalavra(TListaDePalavras *pLista, TPalavra palavra);
