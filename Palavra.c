#include "./headers/Palavra.h"

void LPalavraVazia(TPalavra *pPalavra)
{   
    pPalavra->pLinhas = (pListaLinha)malloc(sizeof(TLinhas));
    pPalavra->pLinhas->pPrimeiro = (pTipoLinha)malloc(sizeof(TCelulaLinha));
    pPalavra->pLinhas->pUltimo = pPalavra->pLinhas->pPrimeiro;
    pPalavra->pLinhas->pPrimeiro->pProx = NULL;
}

void LPreencherPalavra(TPalavra* pPalavra, char *Item)
{
    pPalavra->Palavra = (char*)malloc(strlen(Item)*sizeof(char));
    // printf("\n\n%d\n\n", strlen(Item));
    strcpy(pPalavra->Palavra, Item);
}

TPalavra LRetornarPalavra(TPalavra Palavra)
{
    return Palavra;
}

void LImprimeCadeia(TPalavra *pPalavra)
{   
    printf("%s\n", pPalavra->Palavra);
    
}

void LImprimePalavra(TPalavra *pPalavra)
{
    printf("\n\n%s\n\n", pPalavra->Palavra);
    ImprimeLinhas(pPalavra->pLinhas);
}