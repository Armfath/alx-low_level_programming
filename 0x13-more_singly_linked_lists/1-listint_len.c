#include "lists.h"
/**
 * listint_len - count node in listst
 * @h: head of the list
 *
 * Return: num of the node in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
