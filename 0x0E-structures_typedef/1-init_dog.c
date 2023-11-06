#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the given dog struct
 * @name: the input of the dog name
 * @age: the input of the dof age
 * @owner: the input of dog owner
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
