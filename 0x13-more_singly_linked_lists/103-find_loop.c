#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1 = head, *node2 = head;

	if (head)
	{
		while (node1 && node1->next)
		{
			node1 = node1->next->next;
			node2 = node2->next;
			if (node1 == node2 )
			{
				node2 = head;
				while (node2 != node1)
				{
					node2 = node2->next;
					node1 = node1->next;
				}
				return (node2);
			}
		}
	}
	return (0);
}
