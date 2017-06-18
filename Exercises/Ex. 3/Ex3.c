#include <stdio.h>
#include <stdlib.h>

#include "data.h"
#include "persona.h"

int main(void) {
    //struct Data d;

    struct Persona2 *p = NULL;

    p = creaPersona();
    stampaPersona(p);

    /*d = leggiData();
    stampaData(d);*/

    return 0;
 }
