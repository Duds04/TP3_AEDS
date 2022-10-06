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
    printf("Na criação");

    String palavra;
    String* ptrPalavra;

    if(i=0){
        printf("De começo");
        FLVazia(ptrPalavra);
    }

    if ((arquivo = fopen(texto, "r")) != NULL)
    {
        while (fread(&c, sizeof(char), 1, arquivo))
        {
            if (c == '\n')
            {
                contLinha++;
                printf("\n");
            }
            if (c == ' ' || c == '\n') 
            {     
               
                printf("/");
                i=0;
            }
            else
            {
                printf("Else");
                LInsere(ptrPalavra ,&c);
                printf("%c", c);
                printf("Else pt2");
                LImprime(ptrPalavra);
            }
        }

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
