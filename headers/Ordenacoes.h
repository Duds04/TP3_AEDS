#include "ListaPalavras.h"

//comparacoes, movimentacoes e tempoExec são parametros resultados (serão usados dentro da funcao)
void Bolha(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec); 

void Selecao(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec);

int Insercao(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec);

void Shellsort (TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec);

void Quicksort(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec);

void QsOrdena(int Esq, int Dir, TCelulaPalavras* lpalavras, double* comparacoes, double* movimentacoes);

void QsParticao(int Esq, int Dir,int* i, int* j, TCelulaPalavras* lpalavras, double* comparacoes, double* movimentacoes);

void Heapsort(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec);

void HS_Constroi(TCelulaPalavras *lpalavras, int n, double* comparacoes, double* movimentacoes, double* tempoExec);

void HS_Refaz(int Esq, int Dir, TCelulaPalavras* lpalavras, double* comparacoes, double* movimentacoes, double* tempoExec);