#include <stdio.h>
#include <stdlib.h>

#include "data.h"
#include "persona.h"

struct Persona2 *creaPersona() {
    struct Persona2 *p = (struct Persona2 *) malloc(sizeof(struct Persona2));

    struct Data d = p->dataDiNascita;

    printf("Data di nascita: ");
    scanf("%d/%d/%d", &d.giorno, &d.mese, &d.anno);

    printf("Nome: ");
    scanf("%s", p->nome);

    printf("Cognome: ");
    scanf("%s", p->cognome);

    // Buffer sporco - non legge i dati.

    return p;
}

void stampaPersona(struct Persona2 *p) {
    struct Data d = p->dataDiNascita;

    printf("Nome: %s;\n", p->nome);
    printf("Cognome: %s;\n", p->cognome);
    printf("Data di nascita: %d/%d/%d", d.giorno, d.mese, d.anno);

    return;
}
