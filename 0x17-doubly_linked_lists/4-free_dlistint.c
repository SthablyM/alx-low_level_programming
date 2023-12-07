#include "lists.h"
/**
 *free_dlistint - function that frees a dlistint_t
 *@head: pointer
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
