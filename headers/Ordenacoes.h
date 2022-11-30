#include "ListaPalavras.h"

//comparacoes, movimentacoes e tempoExec são parametros resultados (serão usados dentro da funcao)
void Bolha(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec); 
void Selecao(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec);
int Insercao(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec);
void Shellsort (TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec);
void Quicksort(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec);
void Heapsort(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec);