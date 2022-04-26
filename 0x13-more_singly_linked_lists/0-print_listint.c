#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  its a function that prints all the elements of a list.
 * @h: list of nodes to print
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
