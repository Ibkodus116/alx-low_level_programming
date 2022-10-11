#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *my_dog;
    int i, j, k, x;
    my_dog = malloc(sizeof(*my_dog));
    if (!(my_dog) || !(name) || !(owner))
    {
        free(my_dog);
        return (NULL);
    }
    for (i = 0; name[i]; i++)
        ;
    for (j = 0; owner[j]; j++)
        ;

    (*my_dog).name = malloc(i + 1);
    (*my_dog).owner = malloc(j + 1);

    if (!(my_dog->name) || !(my_dog->owner))
    {
        free(my_dog->owner);
        free(my_dog->name);
        free(my_dog);
        return (NULL);
    }
    for (k = 0; k < i; k++)
        my_dog->name[k] = name[k];
    my_dog->name[k] = '\0';

    my_dog->age = age;

    for (x = 0; x < i; x++)
        my_dog->owner[x] = owner[x];
    my_dog->owner[x] = '\0';

    return (my_dog);
}