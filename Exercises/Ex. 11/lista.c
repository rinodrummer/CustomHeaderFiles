#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

// Legge da tastiera quanti elementi aggiungere;
struct elem *popolaLista(struct elem *ListaDiElementi) {
    unsigned int x = 0;
    unsigned int i = 0;

    printf("Quanti elementi si desidera inserire? ");
    scanf("%d", &x);

    if (x > 0) {
        while (i < x) {
            printf("\n\tInserire l'elemento %d di %d: ", (i + 1), x);
        }
    }

    return ListaDiElementi;
}

// Stampa la lista;
void stampaLista(struct elem *ListaDiElementi);

int lunghezzaLista(struct elem *ListaDiElementi);

// Elimina ogni volta la testa. Ad ogni fine ciclo, testa = testa->next;
struct elem *deallocaLista(struct elem *ListaDiElementi);

struct elem *primoPari(struct elem *ListaDiElementi);

struct elem *minimoPari(struct elem *ListaDiElementi);

// Elimina tutti gli elementi fino ad x;
struct elem *elimina(struct elem *ListaDiElementi, int x);

// Salva la lista in un file
void salvaLista(struct elelm *ListaDiElementi);

// recupera una lista fino al numero di elementi indicati. Tutta se x <= 0 o x => lunghezzaLista
struct elem *recuperaLista(struct elem *ListaDiElementi, int x);
