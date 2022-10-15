// #include "Palavra.h"
#include <stdio.h>
#include "ListaPalavras.h"

typedef struct TCelulaDicionario* pCelulaDicionario;
typedef struct TCelulaDicionario{
    TListaDePalavras* pLista; //  Lista de palavras
    struct TCelulaDicionario* pProx; // apontador pra prox Lista de palavras
}TDicionario;

typedef struct {
    //lista do tipo encadeada tmn 26  
    pCelulaDicionario pPrimeiro;
    // pCelulaDicionario pMeio; //facilitar/otimizar o acesso as listas do dicionario (aponta pra lista "M")
    pCelulaDicionario pUltimo;
}Dicionario;

void InicializaDicionario(Dicionario* pDicionario);     //cria celula  cabeça das listas
void CriaListasPorLetra(Dicionario *pDicionario, TListaDePalavras *pLista);   //adiciona as listas
int ConstroiDicionario(Dicionario* pDicionario, char* pTexto);
TListaDePalavras* ExibirListaPorLetra(Dicionario* pDicionario, char letra);
void MostrarPlavras(Dicionario* pDicionario);
// void AnalisaArquivo(Dicionario* pDicionario, char* pTexto);
