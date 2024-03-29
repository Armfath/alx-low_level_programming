#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of the list
 *
 * Return: num of element in the list
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while ((h != NULL))
	{
		i++;
		h = h->next;
	}
	return (i);
}
