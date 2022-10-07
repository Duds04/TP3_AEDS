#include <stdio.h>
#include <stdlib.h>

typedef struct Celula_LP *Apontador_celula;

typedef struct Celula_LP{

    /* TAD da palavra */
    
    struct Celula_LP* pProx; // Ponteiro para próxima celula
}TCelula;
