#include "lists.h"
/**
 * print_listint - print int from listst
 * @h: head of the list
 *
 * Return: num of the node in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		printf("\n");
		i++;
	}
	return (i);
}