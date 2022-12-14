#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_input() fflush(stdin)
#define limpar_tela() system("cls")
#define pausar_tela() system("pause")
#else
#include <stdio_ext.h>
#define limpar_input() __fpurge(stdin)
#define limpar_tela() system("clear")
#define pausar_tela() printf("\nPress any key to continue..."); limpar_input(); getchar();
#endif

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
        int select1;
        double temp = 0.0, comp = 0.0, movi = 0.0, quant = 0.0;

        limpar_tela();

        // Menu d?? acessoa a funcionalidades que n??o s??o usadas dentro das fun????es
        printf("\n\nMENU\nOBS: Digite os valores numeros das respectivas operacoe\n");
        printf("Escreva a operacao que deseja realizar:\n");
        printf("1 - Escrever o nome do arquivo de entrada\n");
        printf("2 - Buscar lista de palavras no dicionario pela letra\n");
        printf("4 - Remover palavra dada\n");
        printf("4 - Remover a ultima palavra\n");
        printf("5 - Imprime o dicionario\n");
        printf("6 - Utilizar metodos de ordenacao\n");
        printf("7 - Deseja fazer a media entre dois dicionarios?\n");
        printf("8 - Deseja limpar o Dicionario?\n");
        printf("9 - Sair do programa\n");
        printf("\n");
        limpar_input();
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
            pLista = NULL;
            printf("Insira a letra para busca de listas: \n");
            scanf(" %c", &letra);
            pLista = ExibirListaPorLetra(ptrDicionario, letra);
            if (pLista->ultimo == pLista->primeiro)
                printf("Lista nao encontrada\n");
            break;

        case 3:
            pLista = NULL;
            int verifica;
            printf("Coloque a letra da lista voce quer remover: \n");
            scanf(" %c", &letra);
            pLista = ExibirListaPorLetra(ptrDicionario, letra);
            printf("\nEscolha a palavra a ser removida\n");
            scanf(" %s", palavra);
            verifica = RemovePalavraDada(pLista, palavra);

            if(verifica) {
                printf("\nPalavra removida\n");
                ExibirListaPorLetra(ptrDicionario, letra);
            }
            else printf("\nPalavra nao encontrada!\n");

            break;

        case 4:

            pLista = NULL;
            printf("Insira a letra da lista que a sua ultima palavra sera removida: \n");
            scanf(" %c", &letra);
            printf("Lista antes da remocao: \n");
            pLista = ExibirListaPorLetra(ptrDicionario, letra);

            if(pLista->primeiro == pLista->ultimo)
                printf("Lista nao encontrada\n");

            else{
                pLista->ultimo --;
                printf("\nLista depois da remocao: \n");

                if(pLista->primeiro == pLista->ultimo)
                    printf("Lista nao encontrada\n");

                else ExibirListaPorLetra(ptrDicionario, letra);
            }
            break;

        case 5:
            MostrarPlavras(ptrDicionario);
            break;

        case 6:
            printf("[ 1 ] Uma lista em especifico \n[ 2 ] Todo dicionario \n>>> ");
            scanf("%d", &select1);
            switch (select1)
            {
            case 1:
                OrdenaULista(ptrDicionario);
                break;
            case 2:
                OrdenaTudo(ptrDicionario, entrada, &temp, &comp, &movi, &quant);
                break;
            default:
                printf("Invalido");
                break;
            }
            break;

        case 7: 
            for (int i = 0; i < 2; i++){
                char caminho[20] = "./entradas/";
                limpar_dicionario(ptrDicionario);
                printf("Digite o nome do %d arquivo (com sua extensao .txt): \n", i+1);
                scanf(" %s", arquivo);
                strcat(caminho, arquivo);
                ConstroiDicionario(ptrDicionario, caminho);
                OrdenaTudo(ptrDicionario, entrada, &temp, &comp, &movi, &quant);
                if(!i){
                    pausar_tela();
                    limpar_tela();
                }
            }
            limpar_dicionario(ptrDicionario);
            temp = 0.0, comp = 0.0, movi = 0.0, quant = 0.0;
            break;
            
        case 8:
            limpar_dicionario(ptrDicionario);
            printf("Dicionario esta limpo!\n\n");
            break;

        case 9:
            limpar_tela();
            return 0;
            break;

        default:
            printf("Entrada invalida! \n");
            limpar_input();
            break;

        }
        pausar_tela();
    }

    return 0;
}
