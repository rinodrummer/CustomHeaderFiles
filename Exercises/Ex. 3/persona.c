#include <stdio.h>
#include <stdlib.h>

#include "data.h"
#include "persona.h"

struct Persona2 *creaPersona() {
    struct Persona2 *p = (struct Persona2 *) malloc(sizeof(struct Persona2));

    struct Data d = p->dataDiNascita;

    printf("Nome: ");
    scanf("%s", p->nome);

    printf("Cognome: ");
    scanf("%s", p->cognome);

    // Buffer sporco - non legge i dati.
    printf("Data di nascita: ");
    scanf("%d/%d/%d", &d.giorno, &d.mese, &d.anno);

    return p;
}

void stampaPersona(struct Persona2 *p) {
    printf("Nome: %s;\n", p->nome);
    printf("Cognome: %s;\n", p->cognome);
    printf("Data di nascita: ");
    stampaData(p->dataDiNascita);

    return;
}
