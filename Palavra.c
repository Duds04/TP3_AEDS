#include "./headers/Palavra.h"

void LPalavraVazia(TPalavra *pPalavra)
{   
    pPalavra->pLinhas = (pListaLinha)malloc(sizeof(TLinhas));
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
    printf("%s\n\n", pPalavra->Palavra);
    
}

void LImprimePalavra(TPalavra *pPalavra)
{
    printf("\n\n%s\n\n", pPalavra->Palavra);
    ImprimeLinhas(pPalavra->pLinhas);
}
