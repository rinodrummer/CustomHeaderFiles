#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

const char FILE_NAME[] = "lista.txt";

// Legge da tastiera quanti elementi aggiungere;
struct elem *popolaLista() {
    unsigned int x = 0;
    unsigned int i = 0;

    struct elem *prev = NULL;
    struct elem *curr = NULL;

    struct elem *ListaDiElementi = NULL;

    printf("Quanti elementi si desidera inserire? ");
    scanf("%d", &x);

    if (x > 0) {
        for (i = 0; i < x; i++) {
            curr = (struct elem *) malloc(sizeof(struct elem));

            printf("\n\tInserire il valore dell'elemento %d di %d: ", (i + 1), x);
            scanf("%d", &curr->info);

            if (ListaDiElementi == NULL) {
                ListaDiElementi = curr;
            }

            if (prev != NULL)  {
                prev->next = curr;
            }

            prev = curr;
        }
    }
    printf("\n");

    return ListaDiElementi;
}

// Stampa la lista;
void stampaLista(struct elem *ListaDiElementi) {
    struct elem *tmp = ListaDiElementi;
    while (tmp != NULL) {
        printf("%d -> ", tmp->info);

        tmp = tmp->next;
    }

    printf("//;\n");

    return;
}

int lunghezzaLista(struct elem *ListaDiElementi) {
    struct elem *tmp = ListaDiElementi;
    int l = 0;

    while (tmp != NULL) {
        l++;

        tmp = tmp->next;
    }

    return l;
}

// Elimina ogni volta la testa. Ad ogni fine ciclo, testa = testa->next;
struct elem *deallocaLista(struct elem *ListaDiElementi) {
    struct elem *tmp = NULL;

    while (ListaDiElementi != NULL) {
        tmp = ListaDiElementi->next;

        free(ListaDiElementi);

        ListaDiElementi = tmp;
    }

    return ListaDiElementi;
}

struct elem *primoPari(struct elem *ListaDiElementi) {
    while (ListaDiElementi != NULL && (ListaDiElementi->info % 2) != 0) {
        ListaDiElementi = ListaDiElementi->next;
    }

    return ListaDiElementi;
}

struct elem *minimoPari(struct elem *ListaDiElementi) {
    struct elem *minimoPari = primoPari(ListaDiElementi);

    while (ListaDiElementi != NULL) {
        if (((ListaDiElementi->info % 2) == 0) && (ListaDiElementi->info < minimoPari->info)) {
            minimoPari = ListaDiElementi;
        }
    }

    return minimoPari;
}

// Elimina tutti gli elementi fino ad x;
struct elem *elimina(struct elem *ListaDiElementi, int x) {
    struct elem *tmp = NULL;

    int i = 0;

    while (ListaDiElementi != NULL && i < 0) {
        tmp = ListaDiElementi->next;

        free(ListaDiElementi);

        ListaDiElementi = tmp;
    }

    return ListaDiElementi;
}

// Salva la lista in un file
void salvaLista(struct elem *ListaDiElementi) {
    FILE *fp;

    fp = fopen(FILE_NAME, "w");

    if (fp != NULL) {
        while(ListaDiElementi != NULL) {
            fprintf(fp, "%d\n", ListaDiElementi->info);
        }

        fclose(fp);
    }
    else {
        printf("Errore durante il salvataggio della lista.\n");
    }

    return;
}

// recupera una lista fino al numero di elementi indicati. Tutta se x <= 0 o x => lunghezzaLista
struct elem *recuperaLista(int x) {
    struct elem *prev = NULL;
    struct elem *curr = NULL;

    struct elem *ListaDiElementi = NULL;

    int i = 0;

    FILE *fp;

    fp = fopen(FILE_NAME, "r");

    if (fp != NULL) {
        while (!feof(fp) && (i < x)) {
            curr = (struct elem *) malloc(sizeof(struct elem));

            fscanf(fp, "%d", &ListaDiElementi->info);

            if (ListaDiElementi == NULL) {
                ListaDiElementi = curr;
            }

            if (prev != NULL) {
                prev->next = curr;
            }

            prev = curr;

            if (x > 0) {
                i++;
            }
        }

        fclose(fp);
    }

    return ListaDiElementi;
}
