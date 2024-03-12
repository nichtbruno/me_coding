int stringlen(char *string) {
    int c = 0;

    while (*string != '\0') {
        c++;
        string++;
    }

    return c;
}

void Hex_print(char *string, int len) {
    for(int i=0; i<len; i++) {
        printf("%02X ", string[i]);
    }
    printf("\n");
}

void C_print(char *string, int len) {
    for(int i=0; i<len; i++) {
        printf("%c", string[i]);
    }
    printf("\n");
}
