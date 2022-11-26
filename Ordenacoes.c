#include "./headers/Ordenacoes.h"

int Insercao(TListaDePalavras Lista){
    int i,j;
    TCelulaPalavras aux;

    for (i = 1; i < Lista.ultimo; i++){
    aux = Lista.Lista[i];
    j = i - 1;
    while ( ( j >= 0 ) && ( strcmp(aux.ItemPalavra.Palavra, Lista.Lista[j].ItemPalavra.Palavra)<0) ){
        Lista.Lista[j+1] = Lista.Lista[j];
        j--;
    }
    Lista.Lista[j+1] = aux;
    }
    LImprimeListaPalavra(&Lista);
}

void Shellsort (TListaDePalavras Lista){ 
 int i, j; 
 int h = 1;
 TCelulaPalavras aux;
 
 do h = h * 3 + 1; while (h < Lista.ultimo);
 do{ 
    h = h/3;
    for( i = h ; i < Lista.ultimo ; i++ ){
        aux = Lista.Lista[i];
        j = i;
        while (strcmp(Lista.Lista[j-h].ItemPalavra.Palavra, aux.ItemPalavra.Palavra)>0){
            Lista.Lista[j] = Lista.Lista[j-h];
            j -= h;
            if (j < h) break;
        }
        Lista.Lista[j] = aux;
    }
} while (h != 1);
    LImprimeListaPalavra(&Lista);
}
