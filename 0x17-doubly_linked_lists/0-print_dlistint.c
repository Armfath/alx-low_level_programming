#include "lists.h"
/**
 * print_dlistint - print all the elements of an dlist
 *
 * @h: head ofthe list
 *
 * Return: numbers of node in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	};

		return (n);
}
