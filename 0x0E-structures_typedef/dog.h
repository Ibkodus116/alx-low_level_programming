#ifndef BOY_H
#define BOY_H

/**
 * struct dog - Dog attribute
 * @name: First member
 * @age: Second member
 * @owner: Third number
 * Description: a struct containing a dog attribute.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
