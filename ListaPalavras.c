#include "./headers/ListaPalavras.h"

/*  Implementação com célula cabeça em todas funções   */

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
        if (!(strcmp(pLista->Lista[a].ItemPalavra.Palavra, palavra->Palavra)))
        {
            InsereLinha(pLista->Lista[a].ItemPalavra.pLinhas, linha);
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
    pLista->Lista[pLista->ultimo].ItemPalavra = *palavra;
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
        Palavra = &(pLista->Lista[a].ItemPalavra);
        LImprimePalavra(Palavra);
        printf("-----------------------\n");
        
    }
}

int RemovePalavraDada(TListaDePalavras *pLista, char *palavra){
    int a, cont;
    for(a=0; a<pLista->ultimo;a++){
        if (!(strcmp(pLista->Lista[a].ItemPalavra.Palavra, palavra)))
        {
            pLista->ultimo--;
            for (cont = a+1; cont <= pLista->ultimo; cont++)
                pLista->Lista[cont - 1] = pLista->Lista[cont];
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
        pLista->Lista[cont - 1] = pLista->Lista[cont];
    return 1;
}
