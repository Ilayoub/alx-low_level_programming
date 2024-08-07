#include "../search_algos.h"
#include <stdlib.h>
#include <math.h>


void free_skiplist(skiplist_t *list);

/**
 * init_express - The function initializes the express lane
 * of the linked list
 * @list: The pointer to the head node of the list
 * @size: The number of nodes in the list
 */

void init_express(skiplist_t *list, size_t size)
{
	const size_t step = sqrt(size);
	size_t i;
	skiplist_t *save;

	for (save = list, i = 0; i < size; ++i, list = list->next)
	{
		if (i % step == 0)
		{
			save->express = list;
			save = list;
		}
	}
}

/**
 * create_skiplist - The function creates a single linked list
 * @array: The pointer to the array used to fill the list
 * @size: The size of the array
 *
 * Return: A pointer to the head of the created list (NULL on failure)
 */

skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *list;
	skiplist_t *node;
	size_t save_size;

	list = NULL;
	save_size = size;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_skiplist(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->express = NULL;
		node->next = list;
		list = node;
	}
	init_express(list, save_size);
	return (list);
}
