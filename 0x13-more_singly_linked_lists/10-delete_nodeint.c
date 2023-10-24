#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *delete_nodeint_at_index -  function that deletes the node
 *@head: pointer
 *@index: index in a singly linked list of integers
 *Return: : 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	prev = NULL;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0;  current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}
