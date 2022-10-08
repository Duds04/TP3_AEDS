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

void LPalavraVazia(TPalavra* pLista);             // Cria uma nova lista de caracteres
void LPreencherPalavra(TPalavra* pLista, char Item);    // Coloca um novo caracter no final
TPalavra LRetornarPalavra(TPalavra Lista);          // return cadeia inteira(palavra)
void LImprimePalavra(TPalavra* pLista);           //imprime a palavra com as linhas onde ela aparece
void LImprimeCadeia(TPalavra* pLista);           // imprime a cadeia inteira
void LDeletaTudo(TPalavra *pLista);
int LEhVazia(TPalavra *pLista);