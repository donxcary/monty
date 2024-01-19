#include "monty.h"

/**
 * addqueue - adds a new node at the end of a stack_t list
 * @head: pointer to the head of the stack
 * @n: integer to be stored in the new node
 *
 * Description: adds a new node at the end of a stack_t list
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new, *last;

	if (head == NULL)
		return;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return;
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
}
