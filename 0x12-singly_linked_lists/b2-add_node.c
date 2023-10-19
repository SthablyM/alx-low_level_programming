#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 **add_node -  function that adds a new node at the beginning of a list_t list
 *@head: singly link
 *@str: pointer
 *Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(size_t(list_t));
	if (new == NULL)
		return (NULL);

	new_node->str = strup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
