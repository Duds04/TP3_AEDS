#include "./headers/Palavra.h"

// art: 
// 	gcc ./headers/Palavra.h    ./headers/Linhas.h     Linhas.c    Palavra.c     mainTestes.c   -o	exec
// 	./exec 

int main()
{   char pala[10];
    TPalavra guarda;

    printf("Digite uma palavra: ");
    scanf("%s", pala);
    LPalavraVazia(&guarda);
    printf("\nPassou por vazio\n");
    LPreencherPalavra(&guarda, pala);
    printf("Preencheu\n");
    LImprimeCadeia(&guarda);
    printf("Imprimiu\n");
    

    return 0;
}






/*void LPalavraVazia(TPalavra* pPalavra);             // Cria uma Palavra vazia
void LPreencherPalavra(TPalavra* pPalavra, char *Item);    //Incere uma palavra
TPalavra LRetornarPalavra(TPalavra Palavra);          // return cadeia inteira(palavra)
void LImprimeCadeia(TPalavra* pPalavra);           // imprime a cadeia inteira
void LImprimePalavra(TPalavra* pPalavra);           //imprime a palavra com as linhas onde ela aparece
void InsereLinha(TLinhas* pLinha, int pItem);    // Coloca uma nova linha na palavra
TLinhas RetornarLinha(TLinhas Linha);          // return linha
void ImprimeLinhas(TLinhas* pLinha);            // Imprimir as linhas*/