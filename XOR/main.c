#include <stdio.h>
#include "xor.c"

int main() {
    char data[] = "Farbkonzept";
    char key[] = "Farbi123";

    int d_len = stringlen(data);
    char *ept_data = encrypt(data, d_len, key);
    char *dpt_data = decrypt(ept_data, d_len, key);

    Hex_print(ept_data, d_len);
    C_print(ept_data, d_len);
    free(ept_data);

    C_print(dpt_data, d_len);
    free(dpt_data);

    return 0;
}
