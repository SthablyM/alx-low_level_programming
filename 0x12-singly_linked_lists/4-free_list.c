#include "lists.h"
#include <stdlib.h>
/**
 *free_list - function that frees a list_t list.
 *@head: single link
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
