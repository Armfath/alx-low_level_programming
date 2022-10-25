#include "lists.h"

void free_listint2(listint_t **head)
{
    listint_t *tmp;
    listint_t *h;

    h = *head;
    while (h->next != NULL)
    {
        tmp = h;
        h = h->next;
        free(tmp);
    }
    free(h);
    *head = NULL;
}