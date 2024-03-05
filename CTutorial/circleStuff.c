#include <stdio.h>

int main() {
    const float PI = 3.12159;
    float radius;
    float area;
    float circumference;

    printf("What is the radius of the circle: \n");
    scanf("%f", &radius);

    area = PI*(radius*radius);
    circumference = 2*PI*radius;

    printf("The area of the circle is %f.\n", area);
    printf("The circumference of the circle is %f.\n", circumference);
}
