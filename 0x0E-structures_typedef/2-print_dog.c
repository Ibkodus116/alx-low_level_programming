#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * struct dog - the dog struct with dog attribute
 * @d: First member
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil) \n");
		}
		else
		{
			printf("Name: %s \n", d->name);
		}

		if (!(d->age))
		{
			printf("Age: (nil) \n");
		}
		else
		{
			printf("Age: %.1f \n", d->age);
		}

		if (!(d->owner))
		{
			printf("Owner: (nil) \n");
		}
		else
		{
			printf("Owner: %s \n", d->owner);
		}
	}
}
