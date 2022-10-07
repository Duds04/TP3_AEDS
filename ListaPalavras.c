#include "ListaPalavras.h"

/*  Implementação com célula cabeça em todas funções   */

int LP_Inicia_Lista(TLista_de_palavras *pLista){

    pLista->pPrimeiro = (Apontador_celula) malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pUltimo->pProx = NULL;

    return 1;
}

int LP_Insere_no_final(TLista_de_palavras *pLista/*, Tipo_palavra palavra*/){

    pLista->pUltimo->pProx = (Apontador_celula) malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pUltimo->pProx;
    /*pLista->pUltimo->TAD da palavra = palavra*/
    pLista->pUltimo->pProx = NULL;

    return 1;
}

int LP_Numero_de_palavras(TLista_de_palavras *pLista){

    int contador = 0;
    Apontador_celula pAux;

    pAux = pLista->pPrimeiro->pProx;
    while (pAux != NULL){
        contador++;                 /*  Esta função percorre toda a lista somando +1 no contador até o ultimo item   */
        pAux = pAux->pProx;
    }
    return contador;
}

int LP_Verifica_palavra(TLista_de_palavras *pLista/*, TAD_palavra *ponteiro da palavra*/){
    Apontador_celula pAux;
    pAux = pLista->pPrimeiro->pProx;
    while (pAux != NULL){
        /*  if(pAux->""ITEM"" == ponteiro_da_palavra->""ITEM"")
            return 1;   */
        pAux = pAux->pProx;
    }
    return 0;
}
/*
    AINDA FALTA:
        - Remove Palavra (dada a palavra)
        - Remove Palavra (do final)
        - Verifica Palavra (dada a palavra, verifica se já existe na lista)
        - Imprime
*/