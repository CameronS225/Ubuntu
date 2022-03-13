#include "prog9.h"

void print_list(PERSON *person_ptr)
{
    do {
        printf("Name: %s\n", person_ptr->name);
        printf("Age: %i\n\n", person_ptr->age);
        person_ptr = person_ptr->next_ptr;
    } while (person_ptr != NULL);

}
