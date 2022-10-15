#include <stdio.h>
#include <stdlib.h>
#include "./headers/Dicionario.h"

int main()
{
    Dicionario dicionario;
    Dicionario *ptrDicionario = &dicionario;
    InicializaDicionario(ptrDicionario);

    // Cria Todas as Listas de Letras do Dicionario
    {
        TListaDePalavras LA;
        LPIniciaLista(&LA);
        CriaListasPorLetra(ptrDicionario, &LA);
        TListaDePalavras LB;
        LPIniciaLista(&LB);
        CriaListasPorLetra(ptrDicionario, &LB);
        TListaDePalavras LC;
        LPIniciaLista(&LC);
        CriaListasPorLetra(ptrDicionario, &LC);
        TListaDePalavras LD;
        LPIniciaLista(&LD);
        CriaListasPorLetra(ptrDicionario, &LD);
        TListaDePalavras LE;
        LPIniciaLista(&LE);
        CriaListasPorLetra(ptrDicionario, &LE);
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
    
    while (1)
    {   
        int entrada = -1;
        char letra;
        char palavra[100];
        TPalavra Palavra;
        TListaDePalavras* pLista;
        char arquivo[30];
        char caminho[20] = "./entradas/";

        system("cls");

        // Menu dá acessoa a funcionalidades que não são usadas dentro das funções
        printf("\n\nMENU\nOBS: Digite os valores numeros das respectivas operacoe\n");
        printf("Escreva a operacao que deseja realizar:\n");
        printf("1 - Escrever o nome do arquivo de entrada\n");
        printf("2 - Buscar lista de palavras no dicionario pela letra\n");
        printf("3 - Remover palavra em uma lista de palavras\n");
        printf("4 - Remover a ultima palavra\n");
        printf("5 - Imprime o dicionario\n");
        printf("6 - Sair do programa\n");
        printf("\n");
        fflush(stdin);
        scanf(" %d", &entrada);
        printf("\n");

        switch (entrada)
        {
        case 1:
            // arquivo de entrada tem que estar na pasta entradas do programa
            printf("Digite o nome do arquivo (com sua extensao .txt): \n");
            scanf(" %s", arquivo);
            strcat(caminho, arquivo);
            ConstroiDicionario(ptrDicionario, caminho);
            break;

        case 2:
            printf("Insira a letra para busca de listas: \n");
            scanf(" %c", &letra);
            ExibirListaPorLetra(ptrDicionario, letra);
            break;

        case 3:
            
            pLista = NULL;
            printf("Insira a primeira letra da palavra: \n");
            scanf(" %c", &letra);
            printf("Opcoes a ser removidas: \n");
            pLista = ExibirListaPorLetra(ptrDicionario, letra);
            printf("\nEscreva a palavra que deseja remover: \n");
            scanf(" %s", &palavra);

            if(pLista == NULL)
                printf("Lista nao encontrada");
            else{
                RemovePalavraDada(pLista, palavra);
            }
            break;

        case 4:
            
            pLista = NULL;
            printf("Insira a letra da lista que a sua ultima palavra sera removida: \n");
            scanf(" %c", &letra);
            printf("Lista antes da remocao: \n");
            pLista = ExibirListaPorLetra(ptrDicionario, letra);

            if(pLista->pPrimeiro->pProx == NULL)
                printf("Lista nao encontrada\n");
            else{
                RemovePalavraFinal(pLista);
                printf("\nLista depois da remocao: \n");
                pLista = ExibirListaPorLetra(ptrDicionario, letra);
                if(pLista->pPrimeiro->pProx == NULL)
                    printf("Lista nao encontrada\n");
            }
            break;

        case 5:
            MostrarPlavras(ptrDicionario);
            break;

        case 6:
            return 0;
            break;

        default:
            printf("Entrada invalida! \n");
            break;
        }
        system("pause");
    }

    return 0;
}