#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list
 *
 * Return: num of element in the list
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while ((h != NULL))
	{
		i++;
		h->str == NULL ? printf("[0] (nil)\n") : printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
