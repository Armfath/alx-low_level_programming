#include "lists.h"

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