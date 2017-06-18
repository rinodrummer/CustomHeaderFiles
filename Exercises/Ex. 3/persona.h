#include "data.h"

#ifndef PERSONA_LIB_H
#define PERSONA_LIB_H

struct Persona1 {
    char nome[32];
    char cognome[32];
    int eta;
};

struct Persona2 {
    char nome[32];
    char cognome[32];
    struct Data dataDiNascita;
};

struct Persona2 *creaPersona();

void stampaPersona(struct Persona2 *p);

#endif
