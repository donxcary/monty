
#include "monty.h"

/**
 * p_add - adds the top two elements of the stack
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: adds the first two nodes of a stack_t list and removes the top
 */
void p_add(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sum;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr,
			"L%d: can't add, stack too short\n",
				counter);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	*head = (*head)->next;
	free(temp);
	(*head)->prev = NULL;
}

