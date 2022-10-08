#include "headers/Linhas.h"

void LinhaVazia(TLinhas* pLista){
    pLista->pPrimeiro = (pLinha)malloc(sizeof(TLinhas));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pPrimeiro->pProx = NULL;
}

void InsereLinha(TLinhas* pLista, int pItem){
    pLista->pUltimo->pProx = (pLinha)malloc(sizeof(TLinhas));
    pLista->pUltimo = pLista->pUltimo->pProx;
    pLista->pUltimo->Linha = pItem;
    pLista->pUltimo->pProx = NULL;
}

TLinhas RetornarLinha(TLinhas pLista){
    return pLista;
}

void ImprimeLinhas(TLinhas* pLista){
    pLinha pAux;
    pAux = pLista->pPrimeiro->pProx;
    while (pAux != NULL)
    {
        printf("%d", pAux->Linha);
        pAux = pAux->pProx; /* próxima célula */
    }
}
