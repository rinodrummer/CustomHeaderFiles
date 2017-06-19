#include <stdio.h>
#include <stdlib.h>

#include "data.h"
#include "persona.h"

struct Persona2 *creaPersona() {
    struct Persona2 *p = (struct Persona2 *) malloc(sizeof(struct Persona2));

    printf("Nome: ");
    scanf("%s", p->nome);

    printf("Cognome: ");
    scanf("%s", p->cognome);
    
    p->dataDiNascita = leggiData(INT_MODE);

    return p;
}

void stampaPersona(struct Persona2 *p) {
    printf("Nome: %s;\n", p->nome);
    printf("Cognome: %s;\n", p->cognome);
    stampaData(p->dataDiNascita);

    return;
}
