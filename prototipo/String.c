#include "String.h"

void FLVazia(String *pLista)
{
    pLista->pPrimeiro = NULL;
    pLista->pUltimo = NULL;
}
int LEhVazia(String *pLista)
{
    return (pLista->pUltimo == NULL);
}
void LInsere(String *pLista, TCelulaString *pItem)
{
    if (pLista->pUltimo == NULL)
    {
        pLista->pUltimo = (Apontador)malloc(sizeof(TCelulaString));
        pLista->pPrimeiro = pLista->pUltimo;
    }
    else
    {
        pLista->pUltimo->pProx = (Apontador)malloc(sizeof(TCelulaString));
        pLista->pUltimo = pLista->pUltimo->pProx;
    }
    pLista->pUltimo->caracter = pItem->caracter;
    pLista->pUltimo->pProx = NULL;
}

void LImprime(String *pLista)
{
    Apontador pAux;
    pAux = pLista->pPrimeiro;
    while (pAux != NULL)
    {
        printf("%d\n", pAux->caracter);
        pAux = pAux->pProx; /* próxima célula */
    }
}

int LRetiraTudo(String *pLista)
{

    Apontador pAux;
    pAux = pLista->pPrimeiro;
    while (pAux != NULL)
    {
        if (LEhVazia(pLista))
        return 0;

        free(pAux);
        pAux = pAux->pProx;

    }

    pLista->pPrimeiro = NULL;
    pLista->pUltimo = NULL;
    
    if (pLista->pPrimeiro == NULL)
        pLista->pUltimo = NULL; /* lista vazia */
    return 1;
}