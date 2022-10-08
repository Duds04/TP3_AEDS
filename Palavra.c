#include "./headers/Palavra.h"

void LPalavraVazia(TPalavra *pLista)
{
    TLinhas linhas;
    pLista->pPrimeiro = (pLetra)malloc(sizeof(TLetra));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pPrimeiro->pProx = NULL;
    LinhaVazia(&linhas);
    pLista->pLinhas = &linhas;
}

void LPreencherPalavra(TPalavra *pLista, char Item)
{
    pLista->pUltimo->pProx = (pLetra)malloc(sizeof(TLetra));
    pLista->pUltimo = pLista->pUltimo->pProx;
    pLista->pUltimo->Letra = Item;
    pLista->pUltimo->pProx = NULL;
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
