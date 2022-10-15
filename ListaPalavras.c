#include "./headers/ListaPalavras.h"

/*  Implementação com célula cabeça em todas funções   */

int LPIniciaLista(TListaDePalavras *pLista)
{

    pLista->pPrimeiro = (PointerCelula)malloc(sizeof(TCelulaPalavras));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pUltimo->pProx = NULL;

    return 1;
}

int LP_VerificaPalavra(TListaDePalavras *pLista, TPalavra *palavra, int linha)
{
    PointerCelula pAux;
    pAux = pLista->pPrimeiro->pProx;
    while (pAux != NULL)
    {
        if (!(strcmp(pAux->ItemPalavra.Palavra, palavra->Palavra)))
        {
            InsereLinha(pAux->ItemPalavra.pLinhas, linha);
            return 1;
        }
        pAux = pAux->pProx;

    }

    return 0;
}

int LPInsereFinal(TListaDePalavras *pLista, TPalavra *palavra, int linha)
{
    if (LP_VerificaPalavra(pLista, palavra, linha))
    {
        return 0;
    }
    pLista->pUltimo->pProx = (PointerCelula)malloc(sizeof(TCelulaPalavras));
    pLista->pUltimo = pLista->pUltimo->pProx;
    pLista->pUltimo->ItemPalavra = *palavra;
    pLista->pUltimo->pProx = NULL;
    return 1;
}

int LPNumeroPalavras(TListaDePalavras *pLista)
{

    int contador = 0;
    PointerCelula pAux;

    pAux = pLista->pPrimeiro->pProx;
    while (pAux != NULL)
    {
        contador++; /*  Esta função percorre toda a lista somando +1 no contador até o ultimo item   */
        pAux = pAux->pProx;
    }
    return contador;
}

void LImprimeListaPalavra(TListaDePalavras *pLista) /// verificar
{
    PointerCelula pAux;
    pAux = pLista->pPrimeiro->pProx;
    TPalavra *Palavra;

    while (pAux != NULL)
    {
        if (pLista->pPrimeiro != pLista->pUltimo)
        {
            printf("\n-----------------------");
            Palavra = &(pAux->ItemPalavra);
            LImprimePalavra(Palavra);
            pAux = pAux->pProx; /* próxima célula */
            printf("-----------------------\n");
        }
    }
}

int RemovePalavraDada(TListaDePalavras *pLista, TPalavra *palavra){
    PointerCelula pPercorre, pPercorreAux, pAux;
    pPercorre = pLista->pPrimeiro->pProx;
    pPercorreAux = pLista->pPrimeiro;
    while (pPercorre != NULL){
        if(strcmp(palavra->Palavra, pAux->pProx->ItemPalavra.Palavra) == 0){
        pAux = pPercorre;
        pPercorreAux->pProx = pPercorre->pProx;
        free(pAux);
        }
        pPercorre = pPercorre->pProx;
        pPercorreAux = pPercorreAux->pProx;
    }
    return 0;
}

int RemovePalavraFinal(TListaDePalavras *pLista)
{
    PointerCelula pPercorre, pPercorreAux, pAux;
    
    pPercorre = pLista->pPrimeiro->pProx;
    pPercorreAux = pLista->pPrimeiro;
    
    while (pPercorre->pProx != NULL){
        pPercorre = pPercorre->pProx;
        pPercorreAux = pPercorreAux->pProx;
    }
    pAux = pPercorre;
    pPercorreAux->pProx = NULL;
    free(pAux);
    
    return 1;
}
