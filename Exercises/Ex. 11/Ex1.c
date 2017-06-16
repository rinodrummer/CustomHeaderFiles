#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(void) {
    struct elem *ListaDiElementi;

    ListaDiElementi = popolaLista();

    stampaLista(ListaDiElementi);

    return 0;
}
