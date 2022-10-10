#include "./headers/Palavra.h"

void LPalavraVazia(TPalavra *pPalavra)
{
<<<<<<< Updated upstream
    pPalavra->pLinhas->pPrimeiro = (pTipoLinha)malloc(sizeof(TCelulaLinha));
    pPalavra->pLinhas->pUltimo = pPalavra->pLinhas->pPrimeiro;
    pPalavra->pLinhas->pPrimeiro->pProx = NULL;
=======
    pPalavra->pLinhas->pPrimeiro = (pTipoLinha)malloc(sizeof(TLinhas));
    pPalavra->pLinhas->pUltimo = pPalavra->pLinhas->pPrimeiro;
    pPalavra->pLinhas->pPrimeiro->pProx = NULL;
    printf("Criou palavra vazia\n");
    
>>>>>>> Stashed changes
}

void LPreencherPalavra(TPalavra* pPalavra, char *Item)
{
<<<<<<< Updated upstream
    pPalavra->
=======
    pPalavra->Palavra = (char*)malloc(strlen(Item)*sizeof(char));
    strcpy(pPalavra->Palavra, Item);
>>>>>>> Stashed changes
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
