#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent() {
    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    return s; 
}

int main() {
    struct Student top;

    top = getTopStudent(); 

    printf("\n--- Top Student Details ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}

