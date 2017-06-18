#ifndef STRING_LIST_H
#define STRING_LIST_H

struct StringList {
    char val;
    struct StringList *prev;
    struct StringList *next;
};

struct StringList *createString(char *str);

int getLength(struct StringList *str);

#endif
