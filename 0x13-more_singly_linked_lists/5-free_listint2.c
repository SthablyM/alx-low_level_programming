#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint2 -  function that frees a listint_t list.
 *@head: singly link
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head)
	{
		next = *head;
		*head = (*head)->next;
		free(next);
	}
	head = NULL;

}
