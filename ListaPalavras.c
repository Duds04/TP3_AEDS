#include "./headers/ListaPalavras.h"


int LPIniciaLista(TListaDePalavras *pLista)
{
    pLista->primeiro = InicioArranjo;
    pLista->ultimo = pLista->primeiro;

    return 1;
}

int LPVerificaPalavra(TListaDePalavras *pLista, TPalavra *palavra, int linha)
{
    int a;
    for(a=0; a<pLista->ultimo; a++){
        if (!(strcmp(pLista->lPalavra[a].ItemPalavra.Palavra, palavra->Palavra)))
        {
            InsereLinha(pLista->lPalavra[a].ItemPalavra.pLinhas, linha);
            return 1;
        }
    }
    return 0;
}

int LPInsereFinal(TListaDePalavras *pLista, TPalavra *palavra, int linha)
{
    if (LPVerificaPalavra(pLista, palavra, linha))
    {
        return 0;
    }
    if(pLista->ultimo==MaxTam)
        return 0;
    pLista->lPalavra[pLista->ultimo].ItemPalavra = *palavra;
    pLista->ultimo++;

    return 1;
}

int LPNumeroPalavras(TListaDePalavras *pLista)
{
    return pLista->ultimo;
}

void LImprimeListaPalavra(TListaDePalavras *pLista)
{
    int a;
    TPalavra *Palavra;
    if (pLista->primeiro == pLista->ultimo)
        {
            return;
        }
    for(a=0;a<pLista->ultimo;a++)
    {
        printf("\n-----------------------");
        Palavra = &(pLista->lPalavra[a].ItemPalavra);
        LImprimePalavra(Palavra);
        printf("-----------------------\n");
        
    }
}

int RemovePalavraDada(TListaDePalavras *pLista, char *palavra){
    int a, cont;
    for(a=0; a<pLista->ultimo;a++){
        if (!(strcmp(pLista->lPalavra[a].ItemPalavra.Palavra, palavra)))
        {
            pLista->ultimo--;
            for (cont = a+1; cont <= pLista->ultimo; cont++)
                pLista->lPalavra[cont - 1] = pLista->lPalavra[cont];
            return 1;
        }
    }
    return 0;
}

int RemovePalavraFinal(TListaDePalavras *pLista)
{
    int cont;
    pLista->ultimo--;
    for (cont = 1; cont <= pLista->ultimo; cont++)
        pLista->lPalavra[cont - 1] = pLista->lPalavra[cont];
    return 1;
}
