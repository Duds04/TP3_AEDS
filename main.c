#include <stdio.h>
#include <stdlib.h>
#include "./headers/Dicionario.h"
// #include "./headers/Palavra.h"

int main()
{
    Dicionario dicionario;
    Dicionario *ptrDicionario = &dicionario;
    InicializaDicionario(ptrDicionario);

    // Cria Todas as Listas de Letras do Dicionario
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

    printf("\n Rodando programa...\n\n");

    while (1)
    {
        int entrada = -1;

        // Menu dá acessoa a funcionalidades que não são usadas dentro das funções
        printf("\n\nMENU\nOBS: Digite os valores numeros das respectivas operacoe\n");
        printf("Escreva a operação que deseja realizar:\n");
        printf("1 - Escrever o nome do arquivo de entrada\n");
        printf("2 - Buscar lista de palavras no dicionario pela letra\n");
        printf("3 - Remover palavra em uma lista de palavras\n");
        printf("4 - Imprime o dicionario\n");
        printf("5 - Sair do programa\n");
        printf("\n");
        scanf("%d", &entrada);
        printf("\n");

        switch (entrada)
        {
        case 1:
            // arquivo de entrada tem que estar na pasta entradas do programa
            char caminho[13] = "./entradas/";
            char arquivo[30];
            printf("Digite o nome do arquivo (com sua extensao .txt): \n");
            scanf(" %s", arquivo);
            strcat(caminho, arquivo);
            printf("%s", caminho);
            ConstroiDicionario(ptrDicionario, caminho);
            break;
        case 2:
            char letra;
            printf("Insira a letra para busca de listas: \n");
            letra = fgetc(stdin);
            ExibirListaPorLetra(ptrDicionario, letra);
            break;
        case 3:
            char entrada[100];
            TPalavra Palavra;
            TListaDePalavras* pLista = NULL;
            printf("Insira a letra para busca de listas: \n");
            fgets(entrada, 100, stdin);
            pLista = ExibirListaPorLetra(ptrDicionario, entrada[0]);
            LPalavraVazia(&Palavra);
            LPreencherPalavra(&Palavra, entrada, 0);

            if(pLista == NULL)
                printf("Lista nao encontrada");
            else{
                RemovePalavraDada(pLista, &Palavra);
            }
            break;
        case 4:
            MostrarPlavras(ptrDicionario);
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Entrada inválida!");
            break;
        }
    }

    return 0;
}