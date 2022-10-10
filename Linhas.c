#include "./headers/Linhas.h"

void InsereLinha(TLinhas* pLinha, int Item){
    pLinha->pUltimo->pProx = (pTipoLinha)malloc(sizeof(TCelulaLinha));
    pLinha->pUltimo = pLinha->pUltimo->pProx;
    pLinha->pUltimo->Linha = Item;
    pLinha->pUltimo->pProx = NULL;
}

TLinhas RetornarLinha(TLinhas Linha){
    return Linha;
}

void ImprimeLinhas(TLinhas* pLinha){
    pTipoLinha pAux;
    pAux = pLinha->pPrimeiro->pProx;
    while (pAux != NULL)
    {
        printf("%d", pAux->Linha);
        pAux = pAux->pProx; /* próxima célula */
    }
}