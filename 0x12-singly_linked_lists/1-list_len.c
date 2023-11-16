#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets the number of elements
 *            in a linked list_t list.
 * @h: pointer to node header
 * Return: length of a linked list
*/
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
