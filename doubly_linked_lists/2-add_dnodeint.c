#include "lists.h"
/**
* add_dnodeint - Adds a node at the beginning
* @head: Head pointer
* @n:Int pointer
*Return: 0
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}