#include <stdio.h>

struct Student {
    char name[30];
    int age;
    float gpa;
};

int main(void) {
    struct Student s1 = {"Tumaah", 20, 3.8};

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("GPA: %.1f\n", s1.gpa);

    return 0;
}
