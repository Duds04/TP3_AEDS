#include "./headers/Dicionario.h"

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

            switch (primeiraLetra)
            {
            case 'a':
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'b':
                for (int i = 0; i < 1; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'c':
                for (int i = 0; i < 2; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'd':
                for (int i = 0; i < 3; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'e':
                for (int i = 0; i < 4; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'f':
                for (int i = 0; i < 5; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'g':
                for (int i = 0; i < 6; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'h':
                for (int i = 0; i < 7; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'i':
                for (int i = 0; i < 8; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'j':
                for (int i = 0; i < 9; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'k':
                for (int i = 0; i < 10; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'l':
                for (int i = 0; i < 11; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'm':
                for (int i = 0; i < 12; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'n':
                for (int i = 0; i < 13; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'o':
                for (int i = 0; i < 14; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'p':
                for (int i = 0; i < 15; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'q':
                for (int i = 0; i < 16; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'r':
                for (int i = 0; i < 17; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 's':
                for (int i = 0; i < 18; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 't':
                for (int i = 0; i < 19; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'u':
                for (int i = 0; i < 20; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'v':
                for (int i = 0; i < 21; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'w':
                for (int i = 0; i < 22; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'x':
                for (int i = 0; i < 23; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'y':
                for (int i = 0; i < 24; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            case 'z':
                for (int i = 0; i < 25; i++)
                    pAux = pAux->pProx;
                LPInsereFinal(pAux->pLista, &Palavra, contLinha);
                break;
            default:
                printf("Carecter informadao invalido %c", c);
                break;
            }

            if (c == '\n')
            {
                contLinha++;
            }
        }
    }
    else
    {
        fprintf(stderr, "Erro ao abrir o arquivo");
        return 0;
    }
    fclose(arquivo);
}

TListaDePalavras* ExibirListaPorLetra(Dicionario *pDicionario, char letra)
{
    pCelulaDicionario pAux;
    pAux = pDicionario->pPrimeiro->pProx;
    switch (letra)
    {
    case 'a':
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'b':
        for (int i = 0; i < 1; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'c':
        for (int i = 0; i < 2; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'd':
        for (int i = 0; i < 3; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'e':
        for (int i = 0; i < 4; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'f':
        for (int i = 0; i < 5; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'g':
        for (int i = 0; i < 6; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'h':
        for (int i = 0; i < 7; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'i':
        for (int i = 0; i < 8; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'j':
        for (int i = 0; i < 9; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'k':
        for (int i = 0; i < 10; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'l':
        for (int i = 0; i < 11; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'm':
        for (int i = 0; i < 12; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'n':
        for (int i = 0; i < 13; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'o':
        for (int i = 0; i < 14; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'p':
        for (int i = 0; i < 15; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'q':
        for (int i = 0; i < 16; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'r':
        for (int i = 0; i < 17; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 's':
        for (int i = 0; i < 18; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 't':
        for (int i = 0; i < 19; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'u':
        for (int i = 0; i < 20; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'v':
        for (int i = 0; i < 21; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'w':
        for (int i = 0; i < 22; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'x':
        for (int i = 0; i < 23; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'y':
        for (int i = 0; i < 24; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    case 'z':
        for (int i = 0; i < 25; i++)
            pAux = pAux->pProx;
        LImprimeListaPalavra(pAux->pLista);
        return pAux->pLista;
        break;
    default:
        printf("Carecter informadao inválido %c", letra);
        return NULL;
        break;
    }
}

void MostrarPlavras(Dicionario *pDicionario)
{
    pCelulaDicionario pAux;
    pAux = pDicionario->pPrimeiro->pProx;
    int cont = 0;
    char alphabt[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (pAux != NULL)
    {
        if(pAux->pLista->pPrimeiro != pAux->pLista->pUltimo){
            printf("***************************\n");
            printf("\n\nLetra: %c\n\n", alphabt[cont]);
            LImprimeListaPalavra(pAux->pLista);
        }
        pAux = pAux->pProx;
        cont++;
    }
}