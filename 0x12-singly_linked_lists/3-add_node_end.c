#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function adds a new node at end of list_t
 * @head: The start of the list (first node)
 * @str: pointer to string.
 * Return: adress of end node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int duplength = 0;
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[duplength] != '\0')
		duplength++;
	new->len = duplength;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->next = NULL;
	return (new);
}
