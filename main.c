#include <stdio.h>
#include <stdlib.h>
#include "./headers/Dicionario.h"
// #include "./headers/Palavra.h"

int main()
{
    Dicionario dicionario;
    Dicionario *ptrDicionario = &dicionario;
    printf("\n Rodando programa...\n\n");

    InicializaDicionario(ptrDicionario);

    // CriaTodasListasLetras(ptrDicionario);
    {
        TListaDePalavras LA;
        LPIniciaLista(&LA);
        CriaListasPorLetra(ptrDicionario, &LA); // OK
        TListaDePalavras LB;
        LPIniciaLista(&LB);
        CriaListasPorLetra(ptrDicionario, &LB); // OK
        TListaDePalavras LC;
        LPIniciaLista(&LC);
        CriaListasPorLetra(ptrDicionario, &LC); // OK
        TListaDePalavras LD;
        LPIniciaLista(&LD);
        CriaListasPorLetra(ptrDicionario, &LD); // OK
        TListaDePalavras LE;
        LPIniciaLista(&LE);
        CriaListasPorLetra(ptrDicionario, &LE); // OK
        TListaDePalavras LF;
        LPIniciaLista(&LF);
        CriaListasPorLetra(ptrDicionario, &LF);
        TListaDePalavras LG;
        LPIniciaLista(&LG);
        CriaListasPorLetra(ptrDicionario, &LG);
        TListaDePalavras LH;
        LPIniciaLista(&LH);
        CriaListasPorLetra(ptrDicionario, &LH);
        TListaDePalavras LI;
        LPIniciaLista(&LI);
        CriaListasPorLetra(ptrDicionario, &LI);
        TListaDePalavras LJ;
        LPIniciaLista(&LJ);
        CriaListasPorLetra(ptrDicionario, &LJ);
        TListaDePalavras LK;
        LPIniciaLista(&LK);
        CriaListasPorLetra(ptrDicionario, &LK);
        TListaDePalavras LL;
        LPIniciaLista(&LL);
        CriaListasPorLetra(ptrDicionario, &LL);
        TListaDePalavras LM;
        LPIniciaLista(&LM);
        CriaListasPorLetra(ptrDicionario, &LM);
        TListaDePalavras LN;
        LPIniciaLista(&LN);
        CriaListasPorLetra(ptrDicionario, &LN);
        TListaDePalavras LO;
        LPIniciaLista(&LO);
        CriaListasPorLetra(ptrDicionario, &LO);
        TListaDePalavras LP;
        LPIniciaLista(&LP);
        CriaListasPorLetra(ptrDicionario, &LP);
        TListaDePalavras LQ;
        LPIniciaLista(&LQ);
        CriaListasPorLetra(ptrDicionario, &LQ);
        TListaDePalavras LR;
        LPIniciaLista(&LR);
        CriaListasPorLetra(ptrDicionario, &LR);
        TListaDePalavras LS;
        LPIniciaLista(&LS);
        CriaListasPorLetra(ptrDicionario, &LS);
        TListaDePalavras LT;
        LPIniciaLista(&LT);
        CriaListasPorLetra(ptrDicionario, &LT);
        TListaDePalavras LU;
        LPIniciaLista(&LU);
        CriaListasPorLetra(ptrDicionario, &LU);
        TListaDePalavras LV;
        LPIniciaLista(&LV);
        CriaListasPorLetra(ptrDicionario, &LV);
        TListaDePalavras LW;
        LPIniciaLista(&LW);
        CriaListasPorLetra(ptrDicionario, &LW);
        TListaDePalavras LX;
        LPIniciaLista(&LX);
        CriaListasPorLetra(ptrDicionario, &LX);
        TListaDePalavras LY;
        LPIniciaLista(&LY);
        CriaListasPorLetra(ptrDicionario, &LY);
        TListaDePalavras LZ;
        LPIniciaLista(&LZ);
        CriaListasPorLetra(ptrDicionario, &LZ);
    }

    // arquivo de entrada tem que estar na pasta entradas do programa
    ConstroiDicionario(ptrDicionario, "./entradas/gabriel.txt");

    // ConstroiDicionario(ptrDicionario, "./entradas/ent.txt");

    // MostrarPlavras(ptrDicionario);
    MostrarPlavras(ptrDicionario);
    printf("\nPor letra\n");
    ExibirListaPorLetra(ptrDicionario, 'c');

    // MostrarPlavras(ptrDicionario);

    /*

     // char guardaPalavra[200]; // vetor auxiliar para guardar palavra
     // TPalavra salva;
     // TListaDePalavras LA;

     // LPIniciaLista(&LA);

     // strcpy(guardaPalavra, "teste");
     // // printf("%s\n", guardaPalavra);



     // // salva.Palavra = guardaPalavra;
     // LPreencherPalavra(&salva, guardaPalavra);
     // // printf("%s\n", salva.Palavra);
     // LPInsereFinal(&LA, &salva);

     // strcpy(guardaPalavra, "teste2");
     // LPreencherPalavra(&salva, guardaPalavra);
     // LPInsereFinal(&LA, &salva);

     // // LImprimeListaPalavra(&LA);


     // CriaListasPorLetra(ptrDicionario);


     // LPalavraVazia(&guarda);

     // for (int j = 0; j < 5; j++)
     // {
     //     scanf(" %c", &g);
     //     LPreencherPalavra(&guarda, g);
     // }

     // LImprimeCadeia(&guarda);

     // printf("\n1");
     // InicializaDicionario(ptrDicionario);

     // printf("\n2\n");
     // pCelulaDicionario pAux;
     // pAux = ptrDicionario->pPrimeiro;

     // printf("\n3\n");
     // CriaListasPorLetra(ptrDicionario);
     // LPInsereFinal(&(pAux->Lista), &guarda); // dando pau

     // printf("\n4\n");
     // LImprimeListaPalavra(&(pAux->Lista));

     /* TLetra guarda;
     // TLetra x;
     // TPalavra b;
     // char g;

     // LPalavraVazia(&b);

     // for (int j = 0; j < 5; j++)
     // {
     //     scanf(" %c", &g);
     //     LPreencherPalavra(&b, g);
     // }

     // printf("Vou taca\n");
     // LImprimeCadeia(&b);

     // LDeletaTudo(&b);
      LImprimeCadeia(&b);*/

    return 0;
}