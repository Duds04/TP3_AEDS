#include "./headers/Linhas.h"
void LinhaVazia(TLinhas* pLista){
    pLista->pPrimeiro = (pTipoLinha)malloc(sizeof(TLinhas));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pPrimeiro->pProx = NULL;

    // pPalavra->pLinhas->pPrimeiro = (pTipoLinha)malloc(sizeof(TCelulaLinha));
    // printf("\nPassou do erro\n");
    // pPalavra->pLinhas->pUltimo = pPalavra->pLinhas->pPrimeiro;
    // pPalavra->pLinhas->pPrimeiro->pProx = NULL;
}
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