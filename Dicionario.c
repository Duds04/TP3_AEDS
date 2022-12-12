#include "./headers/Dicionario.h"

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

// criando dicionario vazio com celula cabeca
void InicializaDicionario(Dicionario *pDicionario)
{
    pDicionario->pPrimeiro = (pCelulaDicionario)malloc(sizeof(TDicionario));
    pDicionario->pUltimo = pDicionario->pPrimeiro;
    pDicionario->pUltimo->pProx = NULL;
}

//  Criando as listas pras 26 letras de A até Z
void CriaListasPorLetra(Dicionario *pDicionario, TListaDePalavras *pLista)
{
    pDicionario->pUltimo->pProx = (pCelulaDicionario)malloc(sizeof(TDicionario));
    pDicionario->pUltimo = pDicionario->pUltimo->pProx;
    pDicionario->pUltimo->pLista = pLista;
    pDicionario->pUltimo->pProx = NULL;
}

int ConstroiDicionario(Dicionario *pDicionario, char *pTexto)
{
    FILE *arquivo;
    int contLinha = 1;
    char c, primeiraLetra;
    char guardaPalavra[200]; // vetor auxiliar para guardar palavra

    pCelulaDicionario pAux;
    pAux = pDicionario->pPrimeiro->pProx;

    if ((arquivo = fopen(pTexto, "r")) != NULL)
    {
        while (fscanf(arquivo, "%s%c", guardaPalavra, &c) != EOF)
        {
            TPalavra Palavra;
            LPalavraVazia(&Palavra);
            // Pega a primeira letra da palavra, vê em qual lista ela entraria (dentro do switc), e a partir disso verifica se a palavra já está na lista (se tiver, só adiciona o novo numero da linha)  (se não, adiciona a nova palavra na lista)
            primeiraLetra = guardaPalavra[0];
            LPreencherPalavra(&Palavra, guardaPalavra, contLinha);
            pAux = pDicionario->pPrimeiro->pProx;

            int tam;
            tam = primeiraLetra - 'a';

            if (tam > 25 || tam < 0)
            {
                printf("Carecter informadao invalido %c", c);
                return 0;
            }

            for (int i = 0; i < tam; i++)
                pAux = pAux->pProx;

            LPInsereFinal(pAux->pLista, &Palavra, contLinha);
            if (c == '\n')
            {
                contLinha++;
            }
        }
    }
    else
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 0;
    }
    fclose(arquivo);
}

TListaDePalavras *ExibirListaPorLetra(Dicionario *pDicionario, char letra)
{
    pCelulaDicionario pAux;
    pAux = pDicionario->pPrimeiro->pProx;
    int tam;
    tam = letra - 'a';

    if (tam > 25 || tam < 0)
    {
        printf("Carecter informadao invalido %c", letra);
        return NULL;
    }

    for (int i = 0; i < tam; i++)
        pAux = pAux->pProx;

    LImprimeListaPalavra(pAux->pLista);
}

void MostrarPlavras(Dicionario *pDicionario)
{
    pCelulaDicionario pAux;
    pAux = pDicionario->pPrimeiro->pProx;
    int cont = 0;
    char alphabt[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (pAux != NULL)
    {
        if (pAux->pLista->primeiro != pAux->pLista->ultimo)
        {
            printf("***************************\n");
            printf("\n\nLetra: %c\n\n", alphabt[cont]);
            LImprimeListaPalavra(pAux->pLista);
        }
        pAux = pAux->pProx;
        cont++;
    }
}

void OrdenaTudo(Dicionario *pDicionario, int caso, double* temp, double* comp, double* movi, double* quant)
{
    int num;
    double tempoExec, MDtempo, comparacoes, movimentacoes, quantidade, MDmovimentos, MDcomparacoes;

    comparacoes = 0.0;
    movimentacoes = 0.0;
    tempoExec = 0.0;
    quantidade = 0.0;

    printf("Qual ordenacao deseja usar?\n[ 1 ] Bolha\n[ 2 ] Selecao\n[ 3 ] Insercao\n[ 4 ] Shellsort\n[ 5 ] Quicksort\n[ 6 ] Heapsort\n >>> ");
    scanf("%d", &num);
    pCelulaDicionario pAux;
    pAux = pDicionario->pPrimeiro->pProx;
    int cont = 0;
    char alphabt[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (pAux != NULL){
            if (pAux->pLista->primeiro != pAux->pLista->ultimo){

                printf("***************************\n");
                printf("\n\nLetra: %c\n\n", alphabt[cont]);
                quantidade++;

                switch (num){
                    case 1:
                        Bolha(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
                        break;

                    case 2:
                        Selecao(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);    
                        break;

                    case 3:
                        Insercao(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
                        break;

                    case 4:
                        Shellsort(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
                        break;

                    case 5:
                        Quicksort(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
                        break;

                    case 6:
                        Heapsort(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
                        break;
                    default:
                        printf("Inválido");
                        break;
                }
            }
                pAux = pAux->pProx;
                cont++;
    }
    
    MDtempo = tempoExec/quantidade;
    MDmovimentos = movimentacoes/quantidade;
    MDcomparacoes = comparacoes/quantidade;
    
    if (quantidade != 0){
        printf("\nTempo gasto na ordenacao: %lfs\n", tempoExec);
        printf("Quantidade de movimentacoes feitas na ordenacao: %.2lf\n", movimentacoes);
        printf("Quantidade de comparacoes feitas na ordenacao: %.2lf\n\n", comparacoes);
        printf("***************************\n");
        printf("Tivemos %.2lf listas validas, logo:\n", quantidade);
        printf("\nO Tempo medio gasto na ordenacao: %lf\n", MDtempo);
        printf("A quantidade media de movimentacoes: %.2lf\n", MDmovimentos);
        printf("A quantidade media de comparacoes: %.2lf\n\n", MDcomparacoes);
    }
    
    if (quantidade != 0 && caso == 7){
            (*temp) += tempoExec;
            (*comp) += comparacoes;
            (*movi) += movimentacoes;
            (*quant) += quantidade;

            if ((*movi) != movimentacoes){
                pausar_tela();
                limpar_tela();
                printf("Tivemos uma media de %.2lf validas nos dois dicionarios\n", (*quant)/2);
                printf("\nO Tempo medio gasto nas ordenacao: %lf\n", (*temp)/2);
                printf("A quantidade media de movimentacoes:: %.2lf\n", (*movi)/2);
                printf("A quantidade media de comparacoes: %.2lf\n\n", (*comp)/2);
            }

        }
    else
        printf("\nNao teve nenhuma lista valida\n");
    
}

int OrdenaULista(Dicionario *pDicionario)
{
    char letter;
    int num, tam;
    double tempoExec, comparacoes, movimentacoes;
    pCelulaDicionario pAux;

    pAux = pDicionario->pPrimeiro->pProx;
    comparacoes = 0.0;
    movimentacoes = 0.0;
    tempoExec = 0.0;

    printf("Qual ordenacaoo deseja usar?\n[ 1 ] Bolha\n[ 2 ] Selecao\n[ 3 ] Insercao\n[ 4 ] Shellsort\n[ 5 ] Quicksort\n[ 6 ] Heapsort\n >>> ");
    scanf("%d", &num);
    printf("\nQual a letra desejada?\n >>>");
    scanf(" %c", &letter);
    tam = letter - 'a';

    if (tam > 25 || tam < 0)
    {
        printf("Carecter informadao invalido %c", letter);
        return 0;
    }

    for (int i = 0; i < tam; i++)
        pAux = pAux->pProx;

    switch (num)
    {
    case 1:
        Bolha(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
        break;

    case 2:
        Selecao(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
        break;

    case 3:
        Insercao(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
        break;

    case 4:
        Shellsort(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
        break;

    case 5:
        Quicksort(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
        break;

    case 6:
        Heapsort(*pAux->pLista, &comparacoes, &movimentacoes, &tempoExec);
        break;
    }

    printf("Tempo gasto na ordenacao: %lfs\n", tempoExec);
    printf("Quantidade de movimentacoes feitas na ordenacao: %.2lf\n", movimentacoes);
    printf("Quantidade de comparacoes feitas na ordenacao: %2.lf\n", comparacoes);
}

void limpar_dicionario(Dicionario *pDicionario){

    pCelulaDicionario pAux;

    pAux = pDicionario->pPrimeiro->pProx;
    
    while (pAux != NULL){

        pAux->pLista->ultimo = pAux->pLista->primeiro;
        pAux = pAux->pProx;
    }
}
