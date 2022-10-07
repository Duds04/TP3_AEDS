#include "ListaPalavras.h"

int Inicia_Lista(TLista_de_palavras *pLista){

    pLista->pPrimeiro = (Apontador) malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pUltimo->pProx = NULL;

    return 1;
}

int Insere_no_final(TLista_de_palavras *pLista/*, Tipo_palavra palavra*/){

    pLista->pUltimo->pProx = (Apontador) malloc(sizeof(TCelula));
    pLista->pUltimo = pLista->pUltimo->pProx;
    /*pLista->pUltimo->TAD da palavra = palavra*/
    pLista->pUltimo->pProx = NULL;

    return 1;
}

/*
    AINDA FALTA:
        - Remove Palavra (dada a palavra)
        - Remove Palavra (do final)
        - Verifica Palavra (dada a palavra, verifica se já existe na lista)
        - Retorna número de palavras
        - Imprime
*/