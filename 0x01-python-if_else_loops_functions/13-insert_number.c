#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - function with two arguments
 * @head: head pointer to linked list
 * @number: input number
 *
 * Description: insert n value to sorted linked list
 * Return: address of new node, or NULL if fail
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *shine = NULL;
	listint_t *already = NULL;

	shine = malloc(sizeof(listint_t));
	if (shine == NULL)
		return (NULL);

	if (shine)
	{
		shine->n = number;
		shine->next = *head;
		if (shine->next == NULL || shine->n <= (*head)->n)
			*head = shine;
		while(shine->next && shine->n > shine->next->n)
		{
			already = shine->next;
			shine->next = already->next;
		}
		if (already)
			already->next = shine;
	}

	return (shine);
}
