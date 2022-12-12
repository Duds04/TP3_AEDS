#include "./headers/Ordenacoes.h"

int Insercao(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec)
{
    int i, j;
    TCelulaPalavras aux;

    for (i = 1; i < Lista.ultimo; i++)
    {
        aux = Lista.lPalavra[i];
        j = i - 1;

        (*comparacoes) ++;
        while ((j >= 0) && (strcmp(aux.ItemPalavra.Palavra, Lista.lPalavra[j].ItemPalavra.Palavra) < 0))
        {
            Lista.lPalavra[j + 1] = Lista.lPalavra[j];
            j--;
            (*comparacoes) ++;
            (*movimentacoes) ++;
        }
        Lista.lPalavra[j + 1] = aux;
        (*movimentacoes) ++;
    }
    LImprimeListaPalavra(&Lista);
}

void Shellsort(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec)
{
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
            (*comparacoes) ++;
            while (strcmp(Lista.lPalavra[j - h].ItemPalavra.Palavra, aux.ItemPalavra.Palavra) > 0)
            {
                Lista.lPalavra[j] = Lista.lPalavra[j - h];
                j -= h;
                (*comparacoes) ++;
                (*movimentacoes) ++;
                if (j < h)
                    break;
            }
            Lista.lPalavra[j] = aux;
            (*movimentacoes) ++;
        }
    } while (h != 1);
    LImprimeListaPalavra(&Lista);
}

void Bolha(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec)
{
    int i, j;
    TCelulaPalavras aux;

    for (i = 0; i < Lista.ultimo; i++)
    {
        for (j = 1; j < Lista.ultimo; j++)
        {
            (*comparacoes) ++;

            if (strcmp(Lista.lPalavra[j - 1].ItemPalavra.Palavra, Lista.lPalavra[j].ItemPalavra.Palavra) > 0)
            {
                aux = Lista.lPalavra[j];
                Lista.lPalavra[j] = Lista.lPalavra[j - 1];
                Lista.lPalavra[j - 1] = aux;
                (*movimentacoes) ++;
            }
        }
    }

    LImprimeListaPalavra(&Lista);
}

void Selecao(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec){

    TCelulaPalavras aux;
    TCelulaPalavras *lpalavras = Lista.lPalavra;
    int menor;

    for (int i = 0; i < Lista.ultimo-1; i++){
        menor = i;
        for(int j = i+1; j < Lista.ultimo; j++){
            (*comparacoes) ++;
            if (strcmp(lpalavras[menor].ItemPalavra.Palavra, lpalavras[j].ItemPalavra.Palavra) > 0 )
                menor = j;
        }
        aux = lpalavras[menor];
        lpalavras[menor] = lpalavras[i];
        lpalavras[i] = aux;
        (*movimentacoes) ++;
    }
    
    LImprimeListaPalavra(&Lista);
}

void Quicksort(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec){

    QsOrdena(0, Lista.ultimo - 1, Lista.lPalavra, comparacoes, movimentacoes);

    LImprimeListaPalavra(&Lista);
}

void QsOrdena(int Esq, int Dir, TCelulaPalavras* lpalavras, double* comparacoes, double* movimentacoes){
    int i, j;

    QsParticao(Esq, Dir, &i, &j, lpalavras, comparacoes, movimentacoes);

    if (Esq < j) 
        QsOrdena(Esq, j, lpalavras, comparacoes, movimentacoes);

    if (i < Dir) 
        QsOrdena(i, Dir, lpalavras, comparacoes, movimentacoes);

}

void QsParticao(int Esq, int Dir, int *i, int *j, TCelulaPalavras* lpalavras, double* comparacoes, double* movimentacoes){
    
    TPalavra pivo;
    TCelulaPalavras aux;
    *i = Esq;
    *j = Dir;
    pivo = lpalavras[(*i + *j)/2].ItemPalavra;

    do{

        (*comparacoes) ++;
        while (strcmp(pivo.Palavra, lpalavras[*i].ItemPalavra.Palavra) > 0) (*i)++; (*comparacoes) ++;   //Qual do lado esquerdo ta errado

        (*comparacoes) ++;
        while (strcmp(pivo.Palavra, lpalavras[*j].ItemPalavra.Palavra) < 0) (*j)--; (*comparacoes) ++;   //Qual do lado direito ta errado

        if (*i <= *j){
            aux = lpalavras[*i];
            lpalavras[*i] = lpalavras[*j];    //trocando os lugares que sao estao na posição errada
            lpalavras[*j] = aux;
            (*i)++;
            (*j)--;
            (*movimentacoes) ++;
        }
    }while (*i <= *j);
}

void Heapsort(TListaDePalavras Lista, double* comparacoes, double* movimentacoes, double* tempoExec)
{

    int Esq, Dir, n;
    TCelulaPalavras  aux;
    TCelulaPalavras *lpalavras;

    lpalavras = Lista.lPalavra;
    n = Lista.ultimo;

    HS_Constroi(lpalavras, n, comparacoes, movimentacoes, tempoExec); /* constroi o heap */

    Esq = 1;
    Dir = n;

    while (Dir > 1)
    { /* ordena o vetor */
        aux = lpalavras[0];
        lpalavras[0] = lpalavras[Dir-1];
        lpalavras[Dir-1] = aux;
        Dir--;
        (*movimentacoes) ++;
        HS_Refaz(Esq, Dir, lpalavras, comparacoes, movimentacoes, tempoExec);
    }

    printf("Ordenado:\n");
    LImprimeListaPalavra(&Lista);

}

void HS_Constroi(TCelulaPalavras* lpalavras, int n, double* comparacoes, double* movimentacoes, double* tempoExec)
{
    int Esq;
    Esq = (n / 2);

    while (Esq >= 1){
        HS_Refaz(Esq, n, lpalavras, comparacoes, movimentacoes, tempoExec);
        Esq--;
    }
}

void HS_Refaz(int Esq, int Dir, TCelulaPalavras* lpalavras, double* comparacoes, double* movimentacoes, double* tempoExec)
{
    int j = (Esq * 2);
    TCelulaPalavras aux = lpalavras[Esq-1];

    while (j <= Dir){

        (*comparacoes) ++;
        if ((j < Dir) && ((strcmp(lpalavras[j-1].ItemPalavra.Palavra, lpalavras[j].ItemPalavra.Palavra) < 0)))
            j++;

        (*comparacoes) ++;
        if (strcmp(aux.ItemPalavra.Palavra, lpalavras[j-1].ItemPalavra.Palavra) >= 0)
            break;

        lpalavras[Esq-1] = lpalavras[j-1];
        Esq = j;
        j = Esq * 2;
        (*movimentacoes) ++;
    }
    
    lpalavras[Esq-1] = aux;
    (*movimentacoes) ++; 
}
