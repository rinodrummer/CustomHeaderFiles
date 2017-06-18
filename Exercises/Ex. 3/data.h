#include <stdio.h>
#include <stdlib.h>

#ifndef DATA_LIB_H
#define DATA_LIB_H

struct Data {
    int giorno;
    int mese;
    int anno;
};

struct Data leggiData();

void stampaData(struct Data d);

#endif
