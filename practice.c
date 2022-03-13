#include <stdio.h>

typedef struct person
{
    char name[20];
    int age;
    struct person *next;
} PERSON;

void print_person_info(PERSON clone);

int main(void)
{
    PERSON per1,per2;

    printf("ran\n");
    return 0;
}

void print_person_info(PERSON clone)
{
    printf("Name: %s\n", clone.name);
    printf("Age: %i\n\n", clone.age);
}
