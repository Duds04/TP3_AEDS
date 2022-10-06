#include <stdio.h>
#include <stdlib.h>

// criando um tad celula para armazenar uma palavra (SEM celula cabeça)
typedef struct CelulaString
{
    char caracter;
    struct CelulaString *pProx; /* Apontador pProx celula */
} TCelulaString;
