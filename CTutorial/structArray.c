#include <stdio.h>

struct Student {
    char name[25];
    int grade;
};

int main() {
    struct Student student1 = {"Bruno", "1"};
    struct Student student2 = {"notBruno", "6"};

    struct Student students[] = {student1, student2};

    for(int i=0; i<sizeof(students)/sizeof(students[0]); i++) {
        printf("Name: %s", students[i].name);
    }

    return 0;
}
