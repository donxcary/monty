#include "monty.h"

/**
 * p_swap - swaps the top two elements of the stack
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: swaps the first two nodes of a stack_t list
 */
void p_swap(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int value;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr,
			"L%d: can't swap, stack too short\n",
			counter);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	value = temp->n;
	temp->n = temp->next->n;
	temp->next->n = value;
}

