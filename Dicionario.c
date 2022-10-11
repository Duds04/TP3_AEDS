#include "./headers/Dicionario.h"

// criando dicionario vazio com celula cabeca
void InicializaDicionario(Dicionario *pDicionario)
{
    pDicionario->pPrimeiro = (pCelulaDicionario)malloc(sizeof(TDicionario));
    pDicionario->pUltimo = pDicionario->pPrimeiro;
    pDicionario->pUltimo->pProx = NULL;
}

//  Criando as listas pras 26 letras de A até Z
void CriaListasPorLetra(Dicionario *pDicionario)
{
    // char guardaPalavra[200]; // vetor auxiliar para guardar palavra
    // TPalavra salva;
    // strcpy(guardaPalavra, "teste");

    // LPreencherPalavra(&salva, guardaPalavra);

    for (int i = 0; i < 26; i++)
    {
        TListaDePalavras pLista;
        LPIniciaLista(&pLista);
        pDicionario->pUltimo->pProx = (pCelulaDicionario)malloc(sizeof(TDicionario));
        pDicionario->pUltimo = pDicionario->pUltimo->pProx;
        pDicionario->pUltimo->pLista = &pLista;
        pDicionario->pUltimo->pProx = NULL;
        // printf("Ta saindo jaula o monstro\n");
        // LPInsereFinal(pDicionario->pUltimo->pLista, &salva);
        // if(i == 12) pDicionario->pMeio = pDicionario->pUltimo; // ponteiro meio aponta para a Letra "M"
    }
    printf("Rodou tudo\n");
}

int ConstroiDicionario(Dicionario *pDicionario, char *pTexto)
{
    FILE *arquivo;
    int contLinha = 1;
    char c, primeiraLetra;
    char guardaPalavra[200]; // vetor auxiliar para guardar palavra
    TPalavra salva;
    LPalavraVazia(&salva);
    pCelulaDicionario pAux;
    pAux = pDicionario->pPrimeiro->pProx;

    if ((arquivo = fopen(pTexto, "r")) != NULL)
    {
        while (fscanf(arquivo, "%s%c", guardaPalavra, &c) != EOF)
        {
            if (c == '\n')
            {
                contLinha++;
            }

            // Pega a primeira letra da palavra, vê em qual lista ela entraria (dentro do switc), e a partir disso verifica se a palavra já está na lista (se tiver, só adiciona o novo numero da linha)  (se não, adiciona a nova palavra na lista)
            primeiraLetra = guardaPalavra[0];
            LPreencherPalavra(&salva, guardaPalavra);
            // LImprimeCadeia(&salva);

            // erro

            // pDicionario->pPrimeiro->Lista;

            pAux = pDicionario->pPrimeiro->pProx;

            // printf("%c \n", primeiraLetra);

            switch (primeiraLetra)
            {
            case 'a':
                // printf("\nAqui 2 \n");
                LPInsereFinal(pAux->pLista, &salva);
                // pAux = pAux->pProx;
                break;
            /*case 'b':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;
                break;
            case 'c':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;
                break;
            case 'd':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'e':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'f':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'g':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'h':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'i':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'j':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'k':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'l':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'm':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'n':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'o':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'p':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'q':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'r':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 's':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 't':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'u':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'v':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'w':

                break;
            case 'x':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'y':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;
            case 'z':
                // LPInsereFinal(&(pAux->Lista), guarda);
                pAux = pAux->pProx;

                break;*/
            default:
                printf("Carecter informadao inválido %c", c);
                // return 0;
                break;
            }
        }
    }
    else
    {
        fprintf(stderr, "Erro ao abrir o arquivo");
        return 0;
    }    
    fclose(arquivo);

    printf("\nLista: \n");
    pAux = pDicionario->pPrimeiro->pProx;
    LImprimeListaPalavra(pAux->pLista);
}

int ExibirListaPorLetra(Dicionario *pDicionario, char letra)
{
    pCelulaDicionario pAux;

    if (pAux == NULL)
        printf("\nDicionario vazio\n");

    pAux = pDicionario->pPrimeiro->pProx;
    LImprimeListaPalavra(pAux->pLista);

    // for (int i = 0; i < 26; i++)
    // {

    //     if(i == 0 && letra == 'a'){
    //         LImprimeListaPalavra(pAux->pLista);
    //         return 1;
    //     }else if(i == 1){

    //     }else if(i == 2){

    //     }else if(i == 3){

    //     }
    //     pAux = pAux->pProx;
    // }
    return 0;
}

void MostrarPlavras(Dicionario *pDicionario)
{
    pCelulaDicionario pAux;
    pAux = pDicionario->pPrimeiro->pProx;
    if (pAux == NULL)
        printf("\nDicionario vazio\n");
    else
    {
        while (pAux != NULL)
        {
            if(pAux->pLista->pPrimeiro != pAux->pLista->pUltimo){
                LImprimeListaPalavra(pAux->pLista);
                pAux = pAux->pProx; /* próxima célula */
            }
        }
    }
}