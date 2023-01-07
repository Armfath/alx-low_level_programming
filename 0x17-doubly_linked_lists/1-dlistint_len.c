#include "lists.h"
/**
 * dlistint_len - count all the elements of an dlist
 *
 * @h: head ofthe list
 *
 * Return: numbers of node in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	};

		return (n);
}
