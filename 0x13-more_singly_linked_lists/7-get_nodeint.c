#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **get_nodeint_at_index - function that returns the nth node of a listint_t
 *@head: pointer
 *@index: the index of the node
 *Return:if the noode doesn't exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
