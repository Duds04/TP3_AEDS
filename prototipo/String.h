#include "CelulaString.h"
#include <stddef.h>
#define Apontador  TCelula *

typedef struct{
    Apontador pPrimeiro;
    Apontador pUltimo;
} TLista;

void FLVazia(TLista* pLista);
int LEhVazia(TLista* pLista);
int LInsere(TLista* pLista, char *pItem);
int LRetira(TLista* pLista, char *pItem);
void LImprime(TLista* pLista);
