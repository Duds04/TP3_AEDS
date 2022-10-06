#include "./headers/Dicionario.h"
int inicializaDicionario(Dicionario *dicionario /*lista de palavras para serem adicionadas*/)
{
    printf("0");
    return 1;
}
int constroiDicionario(Dicionario *dicionario, char *texto)
{
    FILE *arquivo;
    int contLinha = 1;
    char c;
    int i = 0;
    String palavra;
    String* ptrPalavra;

    if(i=0){
        FLVazia(ptrPalavra);
    }

    // criar uma lista encadeada pra salvar cada palavra
    if ((arquivo = fopen(texto, "r")) != NULL)
    {
        // lendo o arquivo (carecter por caracter) até o seu fim
        while (fread(&c, sizeof(char), 1, arquivo))
        {
            /* se houver uma quebra de linha vai adicionar ao contador de linhas */
            if (c == '\n')
            {
                contLinha++;
                printf("\n");
            }
            /*se houver um espaço ou quebra de linha siginifica que uma palavra chegou ao fim, logo vai tratar ela pra alguma lista */
            if (c == ' ' || c == '\n') 
            {     
                 /* Pega a primeira letra da palavra, vê em qual lista ela entraria (dentro do switc), e a partir disso verifica se a palavra já está na lista (se tiver, só adiciona o novo numero da linha)  (se não, adiciona a nova palavra na lista) */


                // switch (primeiraLetra) 
                // {
                // case 'a':
                //     /* code */
                //     break;
                // case 'b':
                //     /* code */
                //     break;
                // case 'c':
                //     /* code */
                //     break;
                // case 'd':
                //     /* code */
                //     break;
                // case 'e':
                //     /* code */
                //     break;
                // case 'f':
                //     /* code */
                //     break;
                // case 'g':
                //     /* code */
                //     break;
                // case 'h':
                //     /* code */
                //     break;
                // case 'i':
                //     /* code */
                //     break;
                // case 'j':
                //     /* code */
                //     break;
                // case 'k':
                //     /* code */
                //     break;
                // case 'l':
                //     /* code */
                //     break;
                // case 'm':
                //     /* code */
                //     break;
                // case 'n':
                //     /* code */
                //     break;
                // case 'o':
                //     /* code */
                //     break;
                // case 'p':
                //     /* code */
                //     break;
                // case 'q':
                //     /* code */
                //     break;
                // case 'r':
                //     /* code */
                //     break;
                // case 's':
                //     /* code */
                //     break;
                // case 't':
                //     /* code */
                //     break;
                // case 'u':
                //     /* code */
                //     break;
                // case 'v':
                //     /* code */
                //     break;
                // case 'w':
                //     /* code */
                //     break;
                // case 'x':
                //     /* code */
                //     break;
                // case 'y':
                //     /* code */
                //     break;
                // case 'z':
                //     /* code */
                //     break;
                // default:
                //     printf("Carecter informadao inválido %c", c);
                //     return 0;
                //     break;
                // }

                printf("/");
                i=0;
            }
            else
            {
                //imprimindo o texto para teste (funcionalidade provisoria)
                LInsere(ptrPalavra ,&c);
                printf("%c", c);
                LImprime(ptrPalavra);
            }
        }
        //imprimindo qnt de linhas para teste (funcionalidade provisoria)

        printf("\nLinhas: %i\n", contLinha);
    }
    else
    {
        fprintf(stderr, "Erro ao abrir o arquivo");
        return 0;
    }

    fclose(arquivo);
    return 1;
}
int exibirListaPorLetra(Dicionario *dicionario, char letra)
{
    printf("0");
    return 1;
}
int mostrarPlavras(Dicionario *dicionario)
{
    printf("0");
    return 1;
}
