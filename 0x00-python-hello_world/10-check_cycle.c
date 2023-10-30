#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * check_cycle - Checks if a singly linked list has a cycle
  * @list: Pointer to list to check
  *
  * Return: 1 if a cycle or 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *slowly, *sonic;

	if (list == NULL || list->next == NULL)
		return (0);
	slowly = list;
	sonic = slowly->next;

	while (slowly != NULL && sonic->next != NULL
		&& sonic->next->next != NULL)
	{
		if (slowly == sonic)
			return (1);
		slowly = slowly->next;
		sonic = sonic->next->next;
	}
	return (0);
}    
