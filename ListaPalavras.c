#include "./headers/ListaPalavras.h"

/*  Implementação com célula cabeça em todas funções   */

int LPIniciaLista(TListaDePalavras *pLista)
{

    pLista->pPrimeiro = (PointerCelula)malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pUltimo->pProx = NULL;

    return 1;
}

int LP_VerificaPalavra(TListaDePalavras *pLista, TPalavra *palavra){
    PointerCelula pAux;
    pAux = pLista->pPrimeiro->pProx;
    while (pAux != NULL){
        if(strcmp(palavra->Palavra, pAux->ItemPalavra.Palavra));{
            InsereLinha(pAux->ItemPalavra.pLinhas, palavra->pLinhas->pUltimo->Linha);
            free(palavra->pLinhas);
            free(palavra->Palavra);
            free(palavra);
            return 1;
        }
        pAux = pAux->pProx;
    }
    return 0;
}

int LPInsereFinal(TListaDePalavras *pLista, TPalavra *palavra)
{
    if(LP_VerificaPalavra(pLista, palavra) == 1){
        return 0;
    }
    pLista->pUltimo->pProx = (PointerCelula) malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pUltimo->pProx;
    pLista->pUltimo->ItemPalavra = *palavra;
    pLista->pUltimo->pProx = NULL;
    free(palavra);
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

void LImprimeListaPalavra(TListaDePalavras *pLista)
{
    PointerCelula pAux;
    pAux = pLista->pPrimeiro->pProx;
    TPalavra* salva;

    while (pAux != NULL)
    {
        if(pLista->pPrimeiro != pLista->pUltimo){
            salva = &(pAux->ItemPalavra);
            LImprimeCadeia(salva);
            pAux = pAux->pProx; /* próxima célula */
        }
    }
}

// int RemovePalavraDada(){

// }

int RemovePalavraFinal(TListaDePalavras *pLista){
    int NumeroPalavras = LPNumeroPalavras(pLista);
    int cont;
    PointerCelula pAux;
    PointerCelula pAux2;
    pAux = pLista->pPrimeiro->pProx;
    for(cont=0;cont<(NumeroPalavras-1); cont++){
        pAux = pAux->pProx;
    }
    pAux2 = pAux->pProx;
    pAux->pProx = NULL;
    free(pAux2);
    return 1;
}