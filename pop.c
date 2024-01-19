#include "monty.h"

/**
 * p_pop - removes the top element of the stack
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: deletes the head node of a stack_t list
 */
void p_pop(stack_t **head, unsigned int counter)
{
	stack_t *tmp;

	if (head == NULL || *head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(tmp);
}

