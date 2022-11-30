#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - checks if a linked list is circular
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle
 * 0 if none
 */

int check_cycle(listint_t *list)
{
	listint_t *tortoise = list;
	listint_t *hare = list;

	if (!list)
		return (0);

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
