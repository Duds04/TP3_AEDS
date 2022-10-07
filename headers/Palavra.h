#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char letra; 
}TItem;

typedef struct Celula_Palavra* pPalavra; 
typedef struct Celula_Palavra{
    TItem Item; // struct TItem que possui a letra
    struct Celula_Palavra* pProx; // apontador pra prox Celula
}TPalavra;

typedef struct {
    pPalavra pPrimeiro;
    pPalavra pUltimo;
} TLista;

void Palavra_Vazia(TLista* pLista);
int LEhVazia(TLista* pLista);
int Preencher(TLista* pLista, TItem *pItem);
int LRetira(TLista* pLista, TItem *pItem);
void LImprime(TLista* pLista);
