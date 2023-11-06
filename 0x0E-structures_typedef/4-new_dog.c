#include "dog.h"

/**
 * get_length - gets the length of a given string
 * @str: the input string
 * Return: string length
*/
int get_length(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);
	return (1 + get_length(str + 1));
}

/**
 * strdup - gets a pointer to a newly allocated
 *           space in memory, which contains a copy
 *           of the string given as a parameter.
 * @str: the input string
 * Return: a pointer to a new duplicate string,
 *         or NULL if the given string is NULL
*/
char *strdup(char *str)
{
	char *buffer;
	int length, i;

	length = get_length(str);
	buffer = (char *) malloc(sizeof(char) * (length + 1));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		buffer[i] = str[i];

	buffer[length] = '\0';
	return (buffer);
}


/**
 * new_dog - creates a new dog.
 * @name: the given dog name
 * @age: the given dog age
 * @owner: the given dog owner
 * Return: an adress to the new dog if success,
 *         otherwise NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	return (d);
}

