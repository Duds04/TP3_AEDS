#include "./headers/Palavra.h"

void LPalavraVazia(TPalavra *pPalavra)
{
    pPalavra->pLinhas->pPrimeiro = (pTipoLinha)malloc(sizeof(TLinhas));
    pPalavra->pLinhas->pUltimo = pPalavra->pLinhas->pPrimeiro;
    pPalavra->pLinhas->pPrimeiro->pProx = NULL;
    printf("Criou palavra vazia\n");
    
}

void LPreencherPalavra(TPalavra* pPalavra, char *Item)
{
    pPalavra->Palavra = (char*)malloc(strlen(Item)*sizeof(char));
    strcpy(pPalavra->Palavra, Item);
}

TPalavra LRetornarPalavra(TPalavra Palavra)
{
    return Palavra;
}

void LImprimeCadeia(TPalavra *pPalavra)
{
    printf("\n\n%s\n\n", pPalavra->Palavra);
}

void LImprimePalavra(TPalavra *pPalavra)
{
    printf("\n\n%s\n\n", pPalavra->Palavra);
    ImprimeLinhas(pPalavra->pLinhas);
}
