#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char letra; 
}TLetra;

typedef struct Celula_Palavra* pPalavra; 
typedef struct Celula_Palavra{
    TLetra sLetra; // struct TLetra que possui a letra
    struct Celula_Palavra* pProx; // apontador pra prox Celula
}TPalavra;

typedef struct {
    pPalavra pPrimeiro;
    pPalavra pUltimo;
} TLista;

void FLVazia(TPalavra* pLista);
int LEhVazia(TPalavra* pLista);
int LInsere(TPalavra* pLista, TLetra *pItem);
int LRetira(TPalavra* pLista, TLetra *pItem);
void LImprime(TPalavra* pLista);
