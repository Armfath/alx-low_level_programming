#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}