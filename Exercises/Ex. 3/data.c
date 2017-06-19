#include <stdio.h>

#include "data.h"

struct Data leggiData(enum INPUT_MODE mode) {
    struct Data d;

    printf("Data di nascita (%d): ", mode);

    if (mode == STRING_MODE) {
        char s[10];

        scanf("%s", s);

        sscanf(s, "%d/%d/%d", &d.giorno, &d.mese, &d.anno);
    }
    else if (mode == INT_MODE) {
        scanf("%d/%d/%d", &d.giorno, &d.mese, &d.anno);
    }

    return d;
}

void stampaData(struct Data d) {
    printf("%d/%d/%d;\n", d.giorno, d.mese, d.anno);

    return;
}
