#include "ListaPalavras_TADcelula.h"

typedef struct{

    Apontador_celula pPrimeiro;     // Ponteiro para primeiro da lista de palavras no heap
    Apontador_celula pUltimo;       // Ponteiro para ultimo da lista de palavras no heap
    
}TLista_de_palavras;

/*  Cabeçalho das funções Lista de palavras    */

int LP_Inicia_Lista(TLista_de_palavras *pLista);
int LP_Insere_no_final(TLista_de_palavras *pLista/*, Tipo_palavra palavra*/);
int LP_Numero_de_palavras(TLista_de_palavras *pLista);
int LP_Verifica_palavra(TLista_de_palavras *pLista/*, TAD_palavra *ponteiro da palavra*/);