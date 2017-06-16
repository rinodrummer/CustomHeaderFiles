#ifndef LISTA_LIB_H
#define LISTA_LIB_H

struct elem {
    int info;
    struct elem *next;
};

// Legge da tastiera quanti elementi aggiungere;
struct elem *popolaLista(struct elem *ListaDiElementi);

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

#endif
