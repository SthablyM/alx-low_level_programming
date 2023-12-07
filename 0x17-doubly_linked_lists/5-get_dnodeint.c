#include "lists.h"
/**
 **get_dnodeint_at_index -  function that returns the nth node of a dlistint_t
 *@head: parameter to be checked
 *@index: arguments
 *Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
