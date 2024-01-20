
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
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr,
			"L%d: can't pop an empty stack\n",
				counter);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = (*head)->next;
	free(temp);
	if (*head)
		(*head)->prev = NULL;
}
