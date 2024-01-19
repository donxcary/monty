#include "monty.h"

/**
 * p_pstr - prints the string starting at the
 *	top of the stack, followed by a new line
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: prints the ASCII values of the elements
 *	of a stack_t list until it reaches 0, a non-printable character,
 *	or the end of the stack
 */
void p_pstr(stack_t **head, unsigned int counter)
{
	stack_t *current;

	(void)counter;
	if (head == NULL)
		return;
	current = *head;
	while (current != NULL && current->n > 0 && current->n < 128)
	{
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
