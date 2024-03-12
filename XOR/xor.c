#include <stdio.h>
#include <stdlib.h>
#include "string_functions.c"

char *encrypt(char *data, int d_len, char *key) {
    int k_len = stringlen(key);

    char *ept_data = malloc(d_len+1);
    if (ept_data == NULL) { return NULL; }

    for(int i=0; i<d_len; i++) {
        ept_data[i] = data[i]^key[i%k_len];
    }
    ept_data[d_len] = '\0';

    return ept_data;
}

char *decrypt(char *data, int d_len, char *key) {
    int k_len = stringlen(key);

    char *dpt_data = malloc(d_len+1);
    if (dpt_data == NULL) { return NULL; }

    for(int i=0; i<d_len; i++) {
        dpt_data[i] = data[i]^key[i%k_len];
    }
    dpt_data[d_len] = '\0';

    return dpt_data;
}
