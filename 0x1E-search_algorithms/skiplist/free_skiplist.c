#include "../search_algos.h"
#include <stdlib.h>

/**
 * free_skiplist - The function deallocates a singly linked list
 *
 * @list: The pointer to the linked list to be freed
 */

void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
