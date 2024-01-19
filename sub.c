#include "monty.h"

/**
 * p_sub - subtracts the top element of the stack from the second top element
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: subtracts the first two nodes
 *	of a stack_t list and removes the top
 */
void p_sub(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr,
			"L%u: can't sub, stack too short\n",
			counter);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	*head = (*head)->next;
	(*head)->n -= tmp->n;
	(*head)->prev = NULL;
	free(tmp);
}
