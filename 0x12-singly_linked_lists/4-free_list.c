#include "lists.h"
#include <stdlib.h>
/**
 *free_list - function that frees a list_t list.
 *@head: single link
 *Return: void
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		free(head->str);
		free(head);
	}
}
