#include <stdio.h>

typedef struct {
    //lista do tipo encadeada tmn 26  
    int ultimo;
}Dicionario;

int inicializaDicionario(Dicionario* dicionario /*lista de palavras para serem adicionadas*/);
int constroiDicionario(Dicionario* dicionario, char* texto);
int exibirListaPorLetra(Dicionario* dicionario, char letra);
int mostrarPlavras(Dicionario* dicionario);