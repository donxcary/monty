#include "monty.h"

/**
 * p_mul - multiplies the second top element of
 *	the stack with the top element
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: multiplies the first two nodes of
 *	a stack_t list and removes the top
 */
void p_mul(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr,
			"L%u: can't mul, stack too short\n",
			counter);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	*head = (*head)->next;
	(*head)->n *= tmp->n;
	(*head)->prev = NULL;
	free(tmp);
}
