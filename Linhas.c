#include "./headers/Linhas.h"

void InsereLinha(TLinhas* pLinha, int linha){

    if (pLinha->pPrimeiro->pProx == NULL){

        pLinha->pUltimo->pProx = (pTipoLinha)malloc(sizeof(TCelulaLinha));
        pLinha->pUltimo = pLinha->pUltimo->pProx;
        pLinha->pUltimo->Linha = linha;
        pLinha->pUltimo->pProx = NULL;
    }
    else {
            if(pLinha->pUltimo->Linha != linha){ 
                pLinha->pUltimo->pProx = (pTipoLinha)malloc(sizeof(TCelulaLinha));
                pLinha->pUltimo = pLinha->pUltimo->pProx;
                pLinha->pUltimo->Linha = linha;
                pLinha->pUltimo->pProx = NULL;
            }
    }
}

TLinhas RetornarLinha(TLinhas Linha){
    return Linha;
}

void ImprimeLinhas(TLinhas* pLinha){
    pTipoLinha pAux;
    pAux = pLinha->pPrimeiro->pProx;
    if(pAux == NULL) printf("Lista linha vazia\n");
    printf("Linhas: ");
    while (pAux != NULL)
    {
        printf("[%d] ", pAux->Linha);
        pAux = pAux->pProx; /* próxima célula */
    }
    printf("\n");
}