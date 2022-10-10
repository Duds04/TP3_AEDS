#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct CelulaLinha* pTipoLinha; 
typedef struct CelulaLinha{
    int Linha; //  int que representa as linhas da palavra
    struct CelulaLinha* pProx; // apontador pra prox linha q tem essa palavra
}TCelulaLinha;

typedef struct ListaLinhas* pListaLinha; 
typedef struct ListaLinhas{
    pTipoLinha pPrimeiro;       // Primeira linha que a palavra aparece
    pTipoLinha pUltimo;         // Ultima linha que a palavra aparece
}TLinhas;

void InsereLinha(TLinhas* pLinha, int Linha);    // Coloca uma nova linha na palavra
TLinhas RetornarLinha(TLinhas Linha);          // return linha
void ImprimeLinhas(TLinhas* pLinha);            // Imprimir as linhas
