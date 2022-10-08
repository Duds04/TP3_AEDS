#include <stdio.h>
#include <stdlib.h>

typedef struct Celula_Linha* pLinha; 
typedef struct Celula_Linha{
    char Linha; //  char que representa a Linha da palavra
    struct Celula_Linha* pProx; // apontador pra prox Celula
}TCelulaLinha;

typedef struct {
    pLinha pPrimeiro;
    pLinha pUltimo;
}TLinhas;

void LinhaVazia(TLinhas* pLista);             // Cria uma nova linha
void InsereLinha(TLinhas* pLista, int pItem);    // Coloca uma nova linha na palavra
TLinhas RetornarLinha(TLinhas pLista);          // return cadeia inteira(palavra)
void ImprimeLinhas(TLinhas* pLista);
