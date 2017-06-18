#include <stdio.h>
#include <stdlib.h>

#include "StringList.h"

struct StringList *createString(char *str) {
    struct StringList *head = NULL;

    struct StringList *prev = NULL;
    struct StringList *curr = NULL;

    int i;

    while (str[i] != '\0') {
        curr = (struct StringList *) malloc(sizeof(struct StringList));
        curr->val = str[i];
        curr->prev = prev;
        curr->next = NULL;

        if (head == NULL) {
            head = curr;
        }

        if (prev != NULL) {
            prev->next = curr;
        }

        prev = curr;
        i++;
    }

    return head;
}

int getLength(struct StringList *str) {
    int l = 0;

    while (StringList != NULL) {
        l++;

        StringList = StringList->next;
    }

    return l;
}
