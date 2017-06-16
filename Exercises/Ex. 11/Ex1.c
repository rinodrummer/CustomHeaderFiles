#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(void) {
    struct elem *ListaDiElementi;

    ListaDiElementi = popolaLista();

    stampaLista(ListaDiElementi);
    printf("Dimensioni lista: %d;\n\n", lunghezzaLista(ListaDiElementi));

    // ******************************************************************

    printf("Primo valore pari: %d;\n\n", (primoPari(ListaDiElementi))->info);

    printf("Minimo valore pari: %d;\n\n", (minimoPari(ListaDiElementi))->info);

    // ******************************************************************

    stampaLista(ListaDiElementi);
    printf("Dimensioni lista: %d;\n\n", lunghezzaLista(ListaDiElementi));

    // ******************************************************************
    ListaDiElementi = deallocaLista(ListaDiElementi);

    stampaLista(ListaDiElementi);
    printf("Dimensioni lista: %d;\n\n", lunghezzaLista(ListaDiElementi));

    return 0;
}
