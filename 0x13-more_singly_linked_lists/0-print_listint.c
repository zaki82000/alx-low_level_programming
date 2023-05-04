#include "lists.h"

/**
* print_listint - function that prints all the elements of a list_t list
* @h: head pointer to first node in list
*
* Return: return all elements of a list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *curr = h;
	size_t count = 0;
		while (curr != NULL)
		{
			printf("%d\n", curr->n);
			curr = curr->next;
			count++;
		}
	return (count);
}
