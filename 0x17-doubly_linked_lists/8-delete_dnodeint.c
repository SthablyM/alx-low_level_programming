#include "lists.h"
/**
 *delete_dnodeint_at_index - unction that deletes the node at index
 *@head: pointer
 *@index: int value
 *Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *tmp;
	unsigned int i;

	current = *head;

	if (current != NULL)
		while  (current->prev != NULL)
			current = current->prev;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tmp->next = current->next;

				if (current->next != NULL)
					current->next->prev = tmp;
			}
			free(current);
			return (1);
		}
		tmp = current;
		current = current->next;
		i++;
	}
	return (-1);
}
