#include "ListaPalavras.h"

//comparacoes, movimentacoes e tempoExec são parametros resultados (serão usados dentro da funcao)
void Bolha(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec); 

void Selecao(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec);

int Insercao(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec);

void Shellsort (TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec);

void Quicksort(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec);

void QsOrdena(int Esq, int Dir, TCelulaPalavras *lpalavras, int* comparacoes, int* movimentacoes);

void QsParticao(int Esq, int Dir,int *i, int *j, TCelulaPalavras *lpalavras, int* comparacoes, int* movimentacoes);

void Heapsort(TListaDePalavras Lista, int *comparacoes, int *movimentacoes, double *tempoExec);

void HS_Constroi(TCelulaPalavras *lpalavras, int n, int *comparacoes, int *movimentacoes, double *tempoExec);

void HS_Refaz(int Esq, int Dir, TCelulaPalavras *lpalavras, int *comparacoes, int *movimentacoes, double *tempoExec);