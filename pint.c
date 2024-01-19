#include "monty.h"

/**
 * p_pint - prints the value at the top of the stack, followed by a new line
 * @head: pointer to the head of the stack
 * @number: line number
 *
 * Description: prints the top element of a stack_t list
 */

void p_pint(stack_t **head, unsigned int number)
{
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
