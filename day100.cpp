#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;   

    printf("Enter Name Roll Marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}

