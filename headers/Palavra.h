#include "Linhas.h"

typedef struct CelulaPalavra{
    char* Palavra; //  char que representa a Palavra
    pListaLinha pLinhas; // ponteiro pras linhas
}TPalavra;

void LPalavraVazia(TPalavra* pPalavra);             // Cria uma Palavra vazia
void LPreencherPalavra(TPalavra* pPalavra, char *Item);    //Incere uma palavra
TPalavra LRetornarPalavra(TPalavra Palavra);          // return cadeia inteira(palavra)
void LImprimeCadeia(TPalavra* pPalavra);           // imprime a cadeia inteira
void LImprimePalavra(TPalavra* pPalavra);           //imprime a palavra com as linhas onde ela aparece
