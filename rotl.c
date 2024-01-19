#include "monty.h"

/**
 * p_rotl - rotates the stack to the top
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: rotates the first node of a stack_t list to the bottom
 */
void p_rotl(stack_t **head, unsigned int counter)
{
	stack_t *tmp, *last;

	(void)counter;
	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return;
	tmp = *head;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	*head = (*head)->next;
	(*head)->prev = NULL;
	tmp->next = NULL;
	tmp->prev = last;
	last->next = tmp;
}

