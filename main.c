#include <stdio.h>
#include <stdlib.h>
#include "./headers/Dicionario.h"
// #include "./headers/Palavra.h"

int main()
{
    Dicionario dicionario;
    Dicionario *ptrDicionario = &dicionario;
    printf("\n Rodando programa...\n\n");
    
    int entrada = -1;

    printf("Escreva a operação que deseja realizar:\n");
    printf("1 - Escrever o nome do arquivo: \n");
    printf("2 - \n");
    printf("3 - \n");
    printf("4 - \n");
    printf("5 - \n");
    printf("6 - \n");
    printf("7 - \n");
    printf("8 - \n");
    printf("9 - \n");
    printf("10 - \n");
    printf("11 - \n");
    printf("12 - \n");
    printf("13 - \n");
    printf("14 - \n");
    printf("15 - \n");
    printf("16 - \n");
    printf("17 - \n");
    printf("18 - \n");
    printf("19 - \n");
    printf("20 - \n");
    printf("21 - \n");
    

    scanf(" %d", entrada);

    switch (entrada)
    {
    case 1:
        
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    case 6:
        
        break;
    case 7:
        
        break;
    case 8:
        
        break;
    case 9:
        
        break;
    case 10:
        
        break;
    case 11:
        
        break;
    case 12:
        
        break;
    case 13:
        
        break;
    case 14:
        
        break;
    case 15:
        
        break;
    case 16:
        
        break;
    case 17:
        
        break;

    case 18:
        
        break;
    case 19:
        
        break;
    case 20:
        
        break;
    case 21:
        
        break;
    default:
        printf("Entrada inválida!");
        break;
    }





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

    MostrarPlavras(ptrDicionario);
    // MostrarPlavras(ptrDicionario);

    // printf("\nPor letra\n");
    // ExibirListaPorLetra(ptrDicionario, 'c');

    return 0;
}