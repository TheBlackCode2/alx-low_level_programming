#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the list_t list
 * @str: input node string
 * Return: memory address of the new element
 *         if success, otherwise NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l = strlen(str);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = l;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
