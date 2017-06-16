#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(void) {
    struct elem *ListaDiElementi;

    ListaDiElementi = popolaLista();

    stampaLista(ListaDiElementi);

    printf("Dimensioni lista: %d;\n\n", lunghezzaLista(ListaDiElementi));

    ListaDiElementi = deallocaLista(ListaDiElementi);

    stampaLista(ListaDiElementi);

    return 0;
}
