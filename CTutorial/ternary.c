#include <stdio.h>

int getMax(int, int);

int main() {
    int max = getMax(3, 4);
    printf("Max: %d", max);
    return 0;
}

int getMax(int x, int y) {
    return (x > y) ? x : y;
}
