#include <stdio.h>

int main() {
    char operator;
    float x, y, result;

    printf("What operation are you doing? [+, -, *, /] \n");
    scanf("%c", &operator);

    printf("Enter x value: \n");
    scanf("%f", &x);
    printf("Enter y value: \n");
    scanf("%f", &y);

    switch(operator) {
        case '+':
            result = x + y;
            printf("%f + %f is equal to %f", x, y, result);
            break;
        case '-':
            result = x - y;
            printf("%f - %f is equal to %f", x, y, result);
            break;
        case '*':
            result = x * y;
            printf("%f * %f is equal to %f", x, y, result);
            break;
        case '/':
            result = x / y;
            printf("%f / %f is equal to %f", x, y, result);
            break;
        default:
            printf("Not a valid operator!");
    }

    return 0;
}
