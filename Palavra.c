#include "./headers/Palavra.h"

void PalavraVazia(TPalavra *pLista)
{
    TLinhas linhas;
    pLista->pPrimeiro = (pLetra)malloc(sizeof(TLetra));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pPrimeiro->pProx = NULL;
    LinhaVazia(&linhas);
    pLista->pLinhas = &linhas;
}

/*void Preencher(TLista* pLista, TLetra *pItem){
    if(pItem != " "){
        pLista->pUltimo->pProx = (pLetra) malloc(sizeof(TPalavra));
        pLista->pUltimo = pLista->pUltimo->pProx;
        pLista->pUltimo->Letra = *pItem;
    }

    else{
        pLista->pUltimo->pProx = (pLetra) malloc(sizeof(TPalavra));
        pLista->pUltimo = pLista->pUltimo->pProx;
        pLista->pUltimo->Letra = *pItem;

    }
    pLista->pUltimo->pProx = NULL;

}*/

void PreencherPalavra(TPalavra *pLista, char pItem)
{
    pLista->pUltimo->pProx = (pLetra)malloc(sizeof(TLetra));
    pLista->pUltimo = pLista->pUltimo->pProx;
    pLista->pUltimo->Letra = pItem;
    pLista->pUltimo->pProx = NULL;
}

TPalavra RetornarPalavra(TPalavra pLista)
{
    return pLista;
}

void ImprimeCadeia(TPalavra *pLista)
{
    pLetra pAux;
    pAux = pLista->pPrimeiro->pProx;
    while (pAux != NULL)
    {
        printf("%c", pAux->Letra);
        pAux = pAux->pProx; /* próxima célula */
    }
}

void ImprimePalavra(TPalavra *pLista)
{
    pLetra pAux;
    pAux = pLista->pPrimeiro->pProx;
    while (pAux != NULL)
    {
        printf("%c", pAux->Letra);
        ImprimeLinhas(pLista->pLinhas);
        pAux = pAux->pProx; /* próxima célula */
    }
}
