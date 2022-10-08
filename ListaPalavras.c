#include "ListaPalavras.h"

/*  Implementação com célula cabeça em todas funções   */

int LPIniciaLista(TListaDePalavras *pLista)
{

    pLista->pPrimeiro = (PointerCelula)malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pUltimo->pProx = NULL;

    return 1;
}

int LPInsereFinal(TListaDePalavras *pLista, TPalavra palavra)
{

    pLista->pUltimo->pProx = (PointerCelula)malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pUltimo->pProx;
    pLista->pUltimo->ItemPalavra = palavra;
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

// int LP_VerificaPalavra(TListaDePalavras *pLista, TPalavra palavra){
//     TPalavra PalavraCompleta = RetornarPalavra(palavra);
//     PointerCelula pAux;
//     pAux = pLista->pPrimeiro->pProx;
//     while (pAux != NULL){
//         if(PalavraCompleta == RetornarPalavra(pAux->ItemPalavra));
//             return 1;
//         pAux = pAux->pProx;
//     }
//     return 0;
// }
/*
    AINDA FALTA:
        - Remove Palavra (dada a palavra)
        - Remove Palavra (do final)
        - Imprime
*/