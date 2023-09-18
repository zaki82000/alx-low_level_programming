#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the first element in the list.
 * Return: number of nodes.
*/

size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
