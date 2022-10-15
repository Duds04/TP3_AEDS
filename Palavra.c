#include "./headers/Palavra.h"

void LPalavraVazia(TPalavra *pPalavra)
{   
    pPalavra->pLinhas = (pListaLinha)malloc(sizeof(TLinhas));
    pPalavra->pLinhas->pPrimeiro = (pTipoLinha)malloc(sizeof(TCelulaLinha));
    pPalavra->pLinhas->pUltimo = pPalavra->pLinhas->pPrimeiro;
    pPalavra->pLinhas->pPrimeiro->pProx = NULL;
    pPalavra->Palavra = NULL;
}

void LPreencherPalavra(TPalavra* pPalavra, char *Palavra, int Linha)
{
    if (pPalavra->Palavra != NULL)
        free(pPalavra->Palavra);
    pPalavra->Palavra = (char*)malloc(strlen(Palavra)*sizeof(char));
    strcpy(pPalavra->Palavra, Palavra);
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
    printf("\nPalavra: %s\n", pPalavra->Palavra);
    ImprimeLinhas(pPalavra->pLinhas);
}
