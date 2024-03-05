#include <stdio.h>
#include <math.h>

int main() {
    float a;
    float b;
    float c;

    printf("What is the size of a: \n");
    scanf("%f", &a);
    printf("What is the size of b: \n");
    scanf("%f", &b);

    c = sqrt(a*a+b*b);

    printf("The hypotenuse is %f.\n", c);
}
