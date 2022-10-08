#include "./headers/Dicionario.h"

void DicionarioVazio(Dicionario *pDicionario)
{
    pDicionario->pPrimeiro = (pCelulaDicionario)malloc(sizeof(TDicionario));
    pDicionario->pUltimo = pDicionario->pPrimeiro;
    pDicionario->pUltimo->pProx = NULL;
}

void CriaLista(Dicionario *pDicionario, TListaDePalavras *pLista)
{
    for (int i = 0; i < 26; i++)
    {
        pDicionario->pUltimo->pProx = (pCelulaDicionario)malloc(sizeof(TDicionario));
        pDicionario->pUltimo = pDicionario->pUltimo->pProx;
        pDicionario->pUltimo->Lista = *pLista;
        pDicionario->pUltimo->pProx = NULL;
        if(i == 12) pDicionario->pMeio = pDicionario->pUltimo; // ponteiro meio aponta para a Letra "M"
    }
}

int InicializaDicionario(Dicionario *pDicionario /*lista de palavras para serem adicionadas*/)
{
    printf("0");
    return 1;
}

int AnalisaArquivo(Dicionario *pDicionario, char *pTexto)
{
    FILE *arquivo;
    int contLinha = 1;
    char c, primeiraLetra;
    TPalavra guarda;
    LPalavraVazia(&guarda);

    if ((arquivo = fopen(pTexto, "r")) != NULL)
    {
        // lendo o arquivo (carecter por caracter) até o seu fim
        while (fread(&c, sizeof(char), 1, arquivo))
        {
            /* se houver uma quebra de linha vai adicionar ao contador de linhas */
            if (c == '\n')
            {
                contLinha++;
            }
            /*se houver um espaço ou quebra de linha siginifica que uma palavra chegou ao fim, logo vai tratar ela pra alguma lista */
            if (c == ' ' || c == '\n')
            {
                /* Pega a primeira letra da palavra, vê em qual lista ela entraria (dentro do switc), e a partir disso verifica se a palavra já está na lista (se tiver, só adiciona o novo numero da linha)  (se não, adiciona a nova palavra na lista) */
                primeiraLetra = (guarda.pPrimeiro)->pProx->Letra;
                printf("%c \n", primeiraLetra);

                LDeletaTudo(&guarda);
            }
            else
            {
                LPreencherPalavra(&guarda, c);
                primeiraLetra = (guarda.pPrimeiro)->Letra;
                // imprimindo o texto para teste (funcionalidade provisoria)
                //  printf("%c", c);
            }
        }
        // imprimindo qnt de linhas para teste (funcionalidade provisoria)
        printf("\nLinhas: %i\n", contLinha);
    }
    else
    {
        fprintf(stderr, "Erro ao abrir o arquivo");
        return 0;
    }

    fclose(arquivo);
}

int ConstroiDicionario(Dicionario *pDicionario, char *pTexto)
{

    // criar uma lista encadeada pra salvar cada palavra

    // if ((arquivo = fopen(pTexto, "r")) != NULL)
    // {
    //     // lendo o arquivo (carecter por caracter) até o seu fim
    //     while (fread(&c, sizeof(char), 1, arquivo))
    //     {
    //         /* se houver uma quebra de linha vai adicionar ao contador de linhas */
    //         if (c == '\n')
    //         {
    //             contLinha++;
    //         }
    //         /*se houver um espaço ou quebra de linha siginifica que uma palavra chegou ao fim, logo vai tratar ela pra alguma lista */
    //         if (c == ' ' || c == '\n')
    //         {
    //             /* Pega a primeira letra da palavra, vê em qual lista ela entraria (dentro do switc), e a partir disso verifica se a palavra já está na lista (se tiver, só adiciona o novo numero da linha)  (se não, adiciona a nova palavra na lista) */
    //             primeiraLetra = (guarda.pPrimeiro)->pProx->Letra;
    //             printf("%c \n", primeiraLetra);

    //             switch (primeiraLetra)
    //             {
    //             case 'a':
    //                 /* code */
    //                 break;
    //             case 'b':
    //                 /* code */
    //                 break;
    //             case 'c':
    //                 /* code */
    //                 break;
    //             case 'd':
    //                 /* code */
    //                 break;
    //             case 'e':
    //                 /* code */
    //                 break;
    //             case 'f':
    //                 /* code */
    //                 break;
    //             case 'g':
    //                 /* code */
    //                 break;
    //             case 'h':
    //                 /* code */
    //                 break;
    //             case 'i':
    //                 /* code */
    //                 break;
    //             case 'j':
    //                 /* code */
    //                 break;
    //             case 'k':
    //                 /* code */
    //                 break;
    //             case 'l':
    //                 /* code */
    //                 break;
    //             case 'm':
    //                 /* code */
    //                 break;
    //             case 'n':
    //                 /* code */
    //                 break;
    //             case 'o':
    //                 /* code */
    //                 break;
    //             case 'p':
    //                 /* code */
    //                 break;
    //             case 'q':
    //                 /* code */
    //                 break;
    //             case 'r':
    //                 /* code */
    //                 break;
    //             case 's':
    //                 /* code */
    //                 break;
    //             case 't':
    //                 /* code */
    //                 break;
    //             case 'u':
    //                 /* code */
    //                 break;
    //             case 'v':
    //                 /* code */
    //                 break;
    //             case 'w':
    //                 /* code */
    //                 break;
    //             case 'x':
    //                 /* code */
    //                 break;
    //             case 'y':
    //                 /* code */
    //                 break;
    //             case 'z':
    //                 /* code */
    //                 break;
    //             default:
    //                 printf("Carecter informadao inválido %c", c);
    //                 return 0;
    //                 break;
    //             }

    //             // LImprimeCadeia(&guarda);
    //             LDeletaTudo(&guarda);
    //         }
    //         else
    //         {
    //             LPreencherPalavra(&guarda, c);
    //             primeiraLetra = (guarda.pPrimeiro)->Letra;
    //             // imprimindo o texto para teste (funcionalidade provisoria)
    //             //  printf("%c", c);
    //         }
    //     }
    //     // imprimindo qnt de linhas para teste (funcionalidade provisoria)
    //     printf("\nLinhas: %i\n", contLinha);
    // }
    // else
    // {
    //     fprintf(stderr, "Erro ao abrir o arquivo");
    //     return 0;
    // }

    // fclose(arquivo);
    return 1;
}

int ExibirListaPorLetra(Dicionario *pDicionario, char letra)
{
    printf("0");
    return 1;
}
int MostrarPlavras(Dicionario *pDicionario)
{
    printf("0");
    return 1;
}