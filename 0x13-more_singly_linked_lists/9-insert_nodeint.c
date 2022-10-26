#include "lists.h"
int insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
    listint_t *h;
    listint_t *before;
    listint_t *after;
    int num_node = 0, i;

    h = *head;
    while (h->next != NULL)
    {
        num_node++;
        h = h->next;
    }
    h = *head;
    /**
    if (idx > num_node)
    {
       return (NULL);
    }
    */
    for (i = 0; i < idx; i++)
    {
        if (i == (idx - 1))
        {
            before = h;
        }
        h = h->next;
    }
    after = h;
    printf("ok %d\n", after->n);
    return (num_node);
}