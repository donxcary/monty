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
	stack_t *tmp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *head;
	tmp->next = *head;
	(*head)->prev = tmp;
	tmp->prev = NULL;
	*head = tmp;
}
