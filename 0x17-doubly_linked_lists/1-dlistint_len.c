#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - get the length of the
*                linked dlistint_t list
* @h: pointer to the head
* Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	for (; h != NULL; n++)
		h = h->next;

	return (n);
}
