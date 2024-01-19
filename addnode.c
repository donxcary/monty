#include "monty.h"

/**
 * addnode - adds a new node at the beginning of a stack_t list
 * @head: pointer to the head of the stack
 * @n: integer to be stored in the new node
 *
 * Description: adds a new node at the beginning of a stack_t list
 */
void addnode(stack_t **head, int n)
{
	stack_t *new;

	if (head == NULL)
		return;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
}
