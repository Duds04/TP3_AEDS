#include "CelulaString.h"
#include <stddef.h>
#define Apontador  TCelulaString *

typedef struct{
    Apontador pPrimeiro;
    Apontador pUltimo;
} String;

void FLVazia(String* pLista);
int LEhVazia(String* pLista);
void LInsere(String* pLista, TCelulaString *pItem);
int LRetiraTudo(String* pLista);
void LImprime(String* pLista);
