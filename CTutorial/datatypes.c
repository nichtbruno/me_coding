#include <stdio.h>
#include <stdbool.h>

int main() {
    char a = 'C'; // 1 byte %c
    char b[] = "Bruno"; // (6 bytes) %s
    char c[] = {'B', 'r', 'u', 'n', 'o', '\0'}; // (6 bytes) %s

    float d = 3.141592; // 4 bytes (6-7 digits) %f
    double e = 3.141592653589793; // 8 bytes (15-16 digits) %lf

    bool f = true; // 1 byte (true or false) %d
    
    char g = 122; // 1 byte (-128 to 127) %d, %c
    unsigned char h = 234; // 1 byte (0 to 255) %d, %c
    
    short i = 32745; // 2 bytes (-32,768 to 32,767) %d
    unsigned short j = 65535; // 2 bytes (0 to 65,535) %d
    
    int k = 2147483647; // 4 bytes (-2,147,483,648 to 2,147,483,648) %d
    unsigned int l = 4294967295; // 4 bytes (0 to 4,294,967,295) %u

    long long m = 9223372036854775807; // 8 bytes (-9 quantillion to 9 quantillion) %lld
    unsigned long long n = 18446744073709551615U; // 8 bytes (0 to 18 quantillion) %llu
    
    printf("%c\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%f\n", d);
    printf("%lf\n", e);
    printf("%d\n", f);
    printf("%c\n", g);
    printf("%c\n", h);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    printf("%u\n", l);
    printf("%lld\n", m);
    printf("%llu\n", n);

    return 0;
}
