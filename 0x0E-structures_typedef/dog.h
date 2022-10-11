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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
