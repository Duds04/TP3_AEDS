#include "./headers/Palavra.h"

void LPalavraVazia(TPalavra *pPalavra)
{
    pPalavra->pLinhas->pPrimeiro = (pTipoLinha)malloc(sizeof(TCelulaLinha));
    pPalavra->pLinhas->pUltimo = pPalavra->pLinhas->pPrimeiro;
    pPalavra->pLinhas->pPrimeiro->pProx = NULL;
}

void LPreencherPalavra(TPalavra* pPalavra, char *Item)
{
    pPalavra->
}

TPalavra LRetornarPalavra(TPalavra Lista)
{
    return Lista;
}

void LImprimeCadeia(TPalavra *pLista)
{
    pLetra pAux;
    pAux = pLista->pPrimeiro->pProx;
    if(pAux == NULL) printf("\nPalavra vazia"); //Printando que a palavra não existe tá vazia
    while (pAux != NULL)
    {
        printf("%c", pAux->Letra);
        pAux = pAux->pProx; /* próxima célula */
    }
}

void LImprimePalavra(TPalavra *pLista)
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

int LEhVazia(TPalavra *pLista)
{
    return (pLista->pPrimeiro == pLista->pUltimo);
}

void LDeletaTudo(TPalavra *pLista)
{
    TLetra *pAux;
    while (!LEhVazia(pLista))
    {
        pAux = pLista->pPrimeiro;
        pLista->pPrimeiro = pLista->pPrimeiro->pProx;
        free(pAux);
    }
}
