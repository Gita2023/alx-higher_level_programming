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
	listint_t *slowly = list, *sonic = list;
	while (sonic &&sonic->next)
	(	
		slowly = slowly->;
	        sonic = sonic->next->next;
	        if (slowly == sonic)
		return (1);
	)
	return (0);        
