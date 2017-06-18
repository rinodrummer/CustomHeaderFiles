#include <stdio.h>

#include "data.h"

struct Data leggiData() {
    struct Data d;

    printf("Data: ");
    scanf("%d/%d/%d", &d.giorno, &d.mese, &d.anno);

    return d;
}

void stampaData(struct Data d) {
    printf("%d/%d/%d;\n", d.giorno, d.mese, d.anno);

    return;
}
