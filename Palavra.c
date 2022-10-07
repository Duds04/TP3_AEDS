#include "headers/Palavra.h"

void Palavra_Vazia(TLista* pLista){
    pLista->pPrimeiro = (pPalavra) malloc(sizeof(TPalavra));
    pLista->pUltimo = pLista->pPrimeiro;
    pLista->pPrimeiro->pProx = NULL;

}

void Preencher(TLista* pLista, TItem *pItem){
    if(pItem != " "){
        pLista->pUltimo->pProx = (pPalavra) malloc(sizeof(TPalavra));
        pLista->pUltimo = pLista->pUltimo->pProx;
        pLista->pUltimo->Item = *pItem;
    }
    
    else{
        pLista->pUltimo->pProx = (pPalavra) malloc(sizeof(TPalavra));
        pLista->pUltimo = pLista->pUltimo->pProx;
        pLista->pUltimo->Item = *pItem;
        
    }
    pLista->pUltimo->pProx = NULL;

}

char Retornar_Palavra(TLista* pLista){

}

void Imprime_Cadeia(TLista* pLista){

}

