#include "./headers/Ordenacoes.h"
#include <time.h>

int Insercao(TListaDePalavras Lista, int *comparacoes, int *movimentacoes, double *tempoExec)
{
    clock_t start_t, end_t;
    start_t = clock();
    int i, j;
    TCelulaPalavras aux;

    for (i = 1; i < Lista.ultimo; i++)
    {
        aux = Lista.lPalavra[i];
        j = i - 1;
        while ((j >= 0) && (strcmp(aux.ItemPalavra.Palavra, Lista.lPalavra[j].ItemPalavra.Palavra) < 0))
        {
            Lista.lPalavra[j + 1] = Lista.lPalavra[j];
            j--;
        }
        Lista.lPalavra[j + 1] = aux;
    }
    LImprimeListaPalavra(&Lista);

    end_t = clock();
    *(tempoExec) = (double)(end_t - start_t) / CLOCKS_PER_SEC;
}

void Shellsort(TListaDePalavras Lista, int *comparacoes, int *movimentacoes, double *tempoExec)
{
    clock_t start_t, end_t;
    start_t = clock();
    int i, j;
    int h = 1;
    TCelulaPalavras aux;

    do
        h = h * 3 + 1;
    while (h < Lista.ultimo);
    do
    {
        h = h / 3;
        for (i = h; i < Lista.ultimo; i++)
        {
            aux = Lista.lPalavra[i];
            j = i;
            while (strcmp(Lista.lPalavra[j - h].ItemPalavra.Palavra, aux.ItemPalavra.Palavra) > 0)
            {
                Lista.lPalavra[j] = Lista.lPalavra[j - h];
                j -= h;
                if (j < h)
                    break;
            }
            Lista.lPalavra[j] = aux;
        }
    } while (h != 1);
    LImprimeListaPalavra(&Lista);

    end_t = clock();
    *(tempoExec) = (double)(end_t - start_t) / CLOCKS_PER_SEC;
}

void Bolha(TListaDePalavras Lista, int *comparacoes, int *movimentacoes, double *tempoExec)
{
    // Calcula tempo gasto na ordenação
    clock_t start_t, end_t;
    start_t = clock();
    int i, j;
    TCelulaPalavras aux;

    for (i = 0; i < Lista.ultimo; i++)
    {
        for (j = 1; j < Lista.ultimo; j++)
        {

            if (strcmp(Lista.lPalavra[j - 1].ItemPalavra.Palavra, Lista.lPalavra[j].ItemPalavra.Palavra) > 0)
            {
                aux = Lista.lPalavra[j];
                Lista.lPalavra[j] = Lista.lPalavra[j - 1];
                Lista.lPalavra[j - 1] = aux;
                // printf("%s, %s\n", Lista.lPalavra[j - 1].ItemPalavra.Palavra, Lista.lPalavra[j].ItemPalavra.Palavra);
                *(movimentacoes) += 1;
                *(comparacoes) += 1;
            }
        }
    }

    LImprimeListaPalavra(&Lista);
    end_t = clock();
    *(tempoExec) = (double)(end_t - start_t) / CLOCKS_PER_SEC;
}

// void ConstroiHeapsort(TCelulaPalavras *A, int *n){
//     int Esq;
//     Esq = *n / 2 + 1;
//     while (Esq > 1)
//     {
//         Esq--;
//         Refaz(Esq, *n, A);
//     }
// }

// void RefazHeapsort(int Esq, int Dir, TCelulaPalavras *A){
//     int j = Esq * 2;
//     TCelulaPalavras aux = A[Esq];
//     while (j <= Dir){
//         if ((j < Dir)&&(A[j].Chave < A[j+1].Chave)) j++;
//         if (aux.Chave >= A[j].Chave) break;
//         A[Esq] = A[j];
//         Esq = j; j = Esq * 2;
//     }
//     A[Esq] = aux;
// }

// void Heapsort(TListaDePalavras lPalavra, Indice *n)){

//     int Esq, Dir;
//     int aux;
//     Constroi(A, n); /* constroi o heap */
//     Esq = 1; Dir = *n;
//     while (Dir > 1)
//     { /* ordena o vetor */
//     aux = A[1]; A[1] = A[Dir]; A[Dir] = aux;
//     Dir--;
//     Refaz(Esq, Dir, A);
//  }

// }

void Selecao(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec){

    TCelulaPalavras aux;
    TCelulaPalavras *lpalavras = Lista.lPalavra;
    int menor;
    clock_t start_t, end_t;
    start_t = clock();

    for (int i = 0; i < Lista.ultimo-1; i++){
        menor = i;
        for(int j = i+1; j < Lista.ultimo; j++){
            (*comparacoes) ++;
            if (strcmp(lpalavras[menor].ItemPalavra.Palavra, lpalavras[j].ItemPalavra.Palavra) > 0 )
                menor = j;
        }
        (*movimentacoes) ++;
        aux = lpalavras[menor];
        lpalavras[menor] = lpalavras[i];
        lpalavras[i] = aux;
    }
    
    LImprimeListaPalavra(&Lista);
    end_t = clock();
    *(tempoExec) = (double)(end_t - start_t) / CLOCKS_PER_SEC;
}

void Quicksort(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec){
    clock_t start_t, end_t;
    start_t = clock();

    QsOrdena(0, Lista.ultimo - 1, Lista.lPalavra, comparacoes, movimentacoes);

    LImprimeListaPalavra(&Lista);
    end_t = clock();
    *(tempoExec) = (double)(end_t - start_t) / CLOCKS_PER_SEC;
}

void QsOrdena(int Esq, int Dir, TCelulaPalavras *lpalavras, int* comparacoes, int* movimentacoes){
    int i, j;

    QsParticao(Esq, Dir, &i, &j, lpalavras, comparacoes, movimentacoes);

    (*comparacoes) ++;
    if (Esq < j) 
        QsOrdena(Esq, j, lpalavras, comparacoes, movimentacoes);

    (*comparacoes) ++;
    if (i < Dir) 
        QsOrdena(i, Dir, lpalavras, comparacoes, movimentacoes);

}

void QsParticao(int Esq, int Dir, int *i, int *j, TCelulaPalavras *lpalavras, int* comparacoes, int* movimentacoes){
    
    TPalavra pivo;
    TCelulaPalavras aux;
    *i = Esq;
    *j = Dir;
    pivo = lpalavras[(*i + *j)/2].ItemPalavra;

    do{

        while (strcmp(pivo.Palavra, lpalavras[*i].ItemPalavra.Palavra) > 0) (*i)++; (*comparacoes) ++;   //Qual do lado esquerdo ta errado

        while (strcmp(pivo.Palavra, lpalavras[*j].ItemPalavra.Palavra) < 0) (*j)--; (*comparacoes) ++;   //Qual do lado direito ta errado
        (*comparacoes) ++;
        if (*i <= *j){
            aux = lpalavras[*i];
            lpalavras[*i] = lpalavras[*j];    //trocando os lugares que sao estao na posição errada
            lpalavras[*j] = aux;
            (*i)++;
            (*j)--;
            (*movimentacoes) ++;
        }
        (*comparacoes) ++;
    }while (*i <= *j);
}

void Heapsort(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec){
    
}