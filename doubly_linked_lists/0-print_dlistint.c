#include "lists.h"
/**
* print_dlistint - Prints all elements of struct
* @h: head node
* Return: 0
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}