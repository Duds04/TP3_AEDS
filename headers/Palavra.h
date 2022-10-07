#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char letra; 
}TLetra;

typedef struct Celula_Palavra* pPalavra; 
typedef struct Celula_Palavra{
    TLetra sLetra; // struct TLetra que possui a letra
    struct Celula_Palavra* pProx; // apontador pra prox Celula
}TPalavra;

typedef struct {
    pPalavra pPrimeiro;
    pPalavra pUltimo;
} TLista;

<<<<<<< Updated upstream
void FLVazia(TPalavra* pLista);
int LEhVazia(TPalavra* pLista);
int LInsere(TPalavra* pLista, TLetra *pItem);
int LRetira(TPalavra* pLista, TLetra *pItem);
void LImprime(TPalavra* pLista);
=======
void Palavra_Vazia(TLista* pLista);             // Cria uma nova lista de caracteres
void Preencher(TLista* pLista, TItem *pItem);    // Coloca um novo caracter no final
char Retornar_Palavra(TLista* pLista);          // return cadeia inteira(palavra)
void Imprime_Cadeia(TLista* pLista);            // imprime a cadeia inteira
>>>>>>> Stashed changes
