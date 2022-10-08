// #include "Palavra.h"
#include "ListaPalavras.h"
#include <stdio.h>

typedef struct TCelulaDicionario* pCelulaDicionario;
typedef struct TCelulaDicionario{

    TListaDePalavras Lista; //  Lista de palavras
    struct TCelulaDicionario* pProx; // apontador pra prox Lista de palavras

}TDicionario;

typedef struct {
    //lista do tipo encadeada tmn 26  
    pCelulaDicionario pPrimeiro;
    pCelulaDicionario pMeio; //facilitar/otimizar o acesso as listas do dicionario (aponta pra lista "M")
    pCelulaDicionario pUltimo;
}Dicionario;

void DicionarioVazio(Dicionario* pDicionario);     //cria celula  cabeça das listas
void CriaLista(Dicionario* pDicionario, TListaDePalavras *pLista);   //adiciona a prox lista
int ConstroiDicionario(Dicionario* pDicionario, char* pTexto);
int ExibirListaPorLetra(Dicionario* pDicionario, char letra);
int MostrarPlavras(Dicionario* pDicionario);
int AnalisaArquivo(Dicionario* pDicionario, char* pTexto);