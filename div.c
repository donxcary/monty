#include "monty.h"

/**
 * p_div - divides the second top element of the stack by the top element
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: divides the first two nodes of a
 *	stack_t list and removes the top
 */
void p_div(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	*head = (*head)->next;
	(*head)->n /= tmp->n;
	(*head)->prev = NULL;
	free(tmp);
}
