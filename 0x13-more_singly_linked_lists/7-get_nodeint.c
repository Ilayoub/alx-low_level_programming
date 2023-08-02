#include "lists.h"

/**
 * get_nodeint_at_index - the function returns the nth
 * node of a listint_t linked list.
 * @head: The first node in the linked list
 * @index: The index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
