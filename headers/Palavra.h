#include "Linhas.h"

typedef struct Celula_Letra* pLetra;
typedef struct Celula_Letra{
    char Letra; //  char que representa a letra da palavra
    struct Celula_Letra* pProx; // apontador pra prox Celula
}TLetra;

typedef struct {
    pLetra pPrimeiro;
    pLetra pUltimo;
    TLinhas* pLinhas;
} TPalavra;

void PalavraVazia(TPalavra* pLista);             // Cria uma nova lista de caracteres
void PreencherPalavra(TPalavra* pLista, char pItem);    // Coloca um novo caracter no final
TPalavra RetornarPalavra(TPalavra pLista);          // return cadeia inteira(palavra)
void ImprimePalavra(TPalavra* pLista);           //imprime a palavra com as linhas onde ela aparece
void ImprimeCadeia(TPalavra* pLista);           // imprime a cadeia inteira

