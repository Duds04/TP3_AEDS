#include "./headers/Ordenacoes.h"
#include <time.h>


int Insercao(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec){
    int i,j;
    TCelulaPalavras aux;

    for (i = 1; i < Lista.ultimo; i++){
    aux = Lista.lPalavra[i];
    j = i - 1;
    while ( ( j >= 0 ) && ( strcmp(aux.ItemPalavra.Palavra, Lista.lPalavra[j].ItemPalavra.Palavra)<0) ){
        Lista.lPalavra[j+1] = Lista.lPalavra[j];
        j--;
    }
    Lista.lPalavra[j+1] = aux;
    }
    LImprimeListaPalavra(&Lista);
}

void Shellsort(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec){ 
 int i, j; 
 int h = 1;
 TCelulaPalavras aux;
 
 do h = h * 3 + 1; while (h < Lista.ultimo);
 do{ 
    h = h/3;
    for( i = h ; i < Lista.ultimo ; i++ ){
        aux = Lista.lPalavra[i];
        j = i;
        while (strcmp(Lista.lPalavra[j-h].ItemPalavra.Palavra, aux.ItemPalavra.Palavra)>0){
            Lista.lPalavra[j] = Lista.lPalavra[j-h];
            j -= h;
            if (j < h) break;
        }
        Lista.lPalavra[j] = aux;
    }
} while (h != 1);
    LImprimeListaPalavra(&Lista);
}


void Bolha(TListaDePalavras Lista, int* comparacoes, int* movimentacoes, double* tempoExec){
    // Calcula tempo gasto na ordenação
    clock_t start_t, end_t;
    double tempo;
    start_t = clock();

    printf("\nGoing to scan a big loop, start_t = %ld\n", start_t);


    int i, j;
    TCelulaPalavras aux;

    LImprimeListaPalavra(&Lista);


    for (i = 0; i < Lista.ultimo; i++){
        for(j = 1 ; j < Lista.ultimo; j++ ){

            if (strcmp(Lista.lPalavra[j-1].ItemPalavra.Palavra, Lista.lPalavra[j].ItemPalavra.Palavra)>0){
                    aux = Lista.lPalavra[j];
                    Lista.lPalavra[j] = Lista.lPalavra[j-1];
                    Lista.lPalavra[j-1] = aux;
                    printf("%s, %s\n", Lista.lPalavra[j-1].ItemPalavra.Palavra, Lista.lPalavra[j].ItemPalavra.Palavra);
                }
        } 
    }

    LImprimeListaPalavra(&Lista);
    end_t = clock();

    printf("End of the big loop, end_t = %ld\n", end_t);

    tempo = (double)(end_t - start_t) / CLOCKS_PER_SEC;;
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


