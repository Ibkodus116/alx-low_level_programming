#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @name: First member
 * @age: Seconde member
 * @owner:Third member
 *
 * struct dog - inheriting the Dog struct in the dog.h
 * @d: head of member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
