#include "lists.h"
/**
 * listint_len - print int from listst
 * @h: head of the list
 *
 * Return: num of the node in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	return (++i);
}