#include "./headers/Palavra.h"

void LPalavraVazia(TPalavra *pPalavra)
{   
    pPalavra->pLinhas = (pListaLinha)malloc(sizeof(TLinhas));
    pPalavra->pLinhas->pPrimeiro = (pTipoLinha)malloc(sizeof(TCelulaLinha));
    pPalavra->pLinhas->pUltimo = pPalavra->pLinhas->pPrimeiro;
    pPalavra->pLinhas->pPrimeiro->pProx = NULL;
}

void LPreencherPalavra(TPalavra* pPalavra, char *Item, int Linha)
{
    pPalavra->Palavra = (char*)malloc(strlen(Item)*sizeof(char));
    strcpy(pPalavra->Palavra, Item);
    InsereLinha(pPalavra->pLinhas, Linha);

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
    printf("\n%s\n", pPalavra->Palavra);
    ImprimeLinhas(pPalavra->pLinhas);
}