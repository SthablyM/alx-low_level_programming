#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 **add_node_end -  function that adds a new node at the end of a list_t list
 *@head: singly linked
 *@str: string
 *Return:he address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
/**
 *free_list - function to freee the list 
 *@head: to be checked
 *Return: the address
 */
void free_list(list_t *head)
{
	list_t *current;
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
