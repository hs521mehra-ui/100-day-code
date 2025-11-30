#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student *) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    printf("\n--- Student Details ---\n");
    printf("Name : %s\n", s->name);
    printf("Roll : %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);

    free(s);

    return 0;
}

