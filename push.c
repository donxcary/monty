#include "monty.h"

/**
 * p_push - pushes an element to the stack
 * @head: pointer to the head of the stack
 * @number: line number
 *
 * Description: adds a new node at the beginning of a stack_t list
 */

/* This function implements the push opcode */
void p_push(stack_t **head, unsigned int number)
{
	stack_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr,
			"Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	/* Assign the value and the pointers of the new node */
	new_node->n = bus.arg;
	new_node->prev = NULL;
	new_node->next = *head;

	/* If the stack is not empty, update the prev pointer of the old head */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* Make the new node the new head of the stack */
	*head = new_node;
}
