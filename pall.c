#include "monty.h"

/**
 * p_pall - prints all the values on the stack, starting from the top
 * @head: pointer to the head of the stack
 * @number: line number
 *
 * Description: prints all the elements of a stack_t list
 */

/* This function implements the pall opcode */
void p_pall(stack_t **head, unsigned int number)
{
	stack_t *current;

	/* Traverse the stack from the head and print the values */
	current = *head;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
