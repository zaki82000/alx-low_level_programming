#include "lists.h"

/**
* list_len - function that returns the number of elements in a linked list_t
* @h: head pointer to first node in list
*
* Return: return counter of the elments
*/

size_t list_len(const list_t *h)
{

	const list_t *temp = h;
	unsigned int count = 1;

	if (temp == NULL)
	return (0);

	while (temp->next != NULL)
	{
	count++;
	temp = temp->next;
	}
	return (count);
}
