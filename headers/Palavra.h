#include "Linhas.h"

typedef struct Celula_Palavra* pPalavra;
typedef struct Celula_Palavra{
    char* Palavra; //  char que representa a Palavra
    TLinhas* pLinhas; // ponteiro pras linhas
}TPalavra;

void LPalavraVazia(TPalavra* pPalavra);             // Cria uma nova lista de caracteres
void LPreencherPalavra(TPalavra* pPalavra, char *Item);    // Coloca um novo caracter no final
TPalavra LRetornarPalavra(TPalavra Palavra);          // return cadeia inteira(palavra)
void LImprimePalavra(TPalavra* pPalavra);           //imprime a palavra com as linhas onde ela aparece
void LImprimeCadeia(TPalavra* pPalavra);           // imprime a cadeia inteira
void LDeletaTudo(TPalavra *pPalavra);
int LEhVazia(TPalavra *pPalavra);
