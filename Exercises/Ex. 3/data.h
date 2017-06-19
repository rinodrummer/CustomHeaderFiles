#include <stdio.h>
#include <stdlib.h>

#ifndef DATA_LIB_H
#define DATA_LIB_H

enum INPUT_MODE {STRING_MODE, INT_MODE};

struct Data {
    int giorno;
    int mese;
    int anno;
};

struct Data leggiData(enum INPUT_MODE mode);

void stampaData(struct Data d);

#endif
