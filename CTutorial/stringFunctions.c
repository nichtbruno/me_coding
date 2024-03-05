#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Bruno";
    char str2[] = "nicht";

    // strlwr(str1);
    // printf("%s", str1);
    //
    // strupr(str1);
    // printf("%s", str1);

    strcat(str1, str2);
    printf("%s\n", str1);

    strncat(str1, str2, 3);
    printf("%s\n", str1);

    strcpy(str1, str2);
    printf("%s\n", str1);

    char str3[] = "Bruno";
    strncpy(str3, str2, 2);
    printf("%s\n", str3);

    strset(str1, "?"); // Bruno -> ?????
    strnset(str1, "?", 3); // Bruno -> ???no
    strrev(str1); // Bruno -> onurB
    
    strlen(str1);
    strcmp(str1, str2); // compare all characters
    strncmp(str1, str2, 2): // compare n characters
    strcmpi(str1, str2); // compare but ignore case
    strnicmp(str1, str2); // compare n characters but ignore case


    return 0;
}
