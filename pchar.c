#include "monty.h"

/**
 * p_pchar - prints the char at the top of the stack, followed by a new line
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: prints the ASCII value of the top element of a stack_t list
 */
void p_pchar(stack_t **head, unsigned int counter)
{
	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n < 0 || (*head)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", counter);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*head)->n);
}

