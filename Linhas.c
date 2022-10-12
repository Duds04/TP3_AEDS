#include "./headers/Linhas.h"

    
void InsereLinha(TLinhas* pLinha, int linha){
    pTipoLinha pAux;
    pAux = pLinha->pPrimeiro->pProx;
    while (pAux != NULL)
    {
        if(pAux->Linha == linha){
            pLinha->pUltimo->pProx = (pTipoLinha)malloc(sizeof(TCelulaLinha));
            pLinha->pUltimo = pLinha->pUltimo->pProx;
            pLinha->pUltimo->Linha = linha;
            pLinha->pUltimo->pProx = NULL;
        }
        pAux = pAux->pProx; /* próxima célula */
    }
}

TLinhas RetornarLinha(TLinhas Linha){
    return Linha;
}

void ImprimeLinhas(TLinhas* pLinha){
    pTipoLinha pAux;
    pAux = pLinha->pPrimeiro->pProx;
    if(pAux == NULL) printf("Lista linha vazia\n");
    while (pAux != NULL)
    {
        printf("[%d] ", pAux->Linha);
        pAux = pAux->pProx; /* próxima célula */
    }
}