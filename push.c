#include "monty.h"

/**
 * p_push - pushes an element to the stack
 * @head: pointer to the head of the stack
 * @number: line number
 *
 * Description: adds a new node at the beginning of a stack_t list
 */
void p_push(stack_t **head, unsigned int number)
{
	stack_t *new;

	if (head == NULL)
	{
		fprintf(stderr, "L%u: stack not found\n", number);
		exit(EXIT_FAILURE);
	}
	if (bus.arg == NULL || !is_number(bus.arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(bus.arg);
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
}
