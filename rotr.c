#include "monty.h"

/**
 * p_rotr - rotates the stack to the bottom
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: rotates the last node of a stack_t list to the top
 */
void p_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp, *last;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	tmp = last->prev;
	tmp->next = NULL;
	last->prev = NULL;
	last->next = *head;
	(*head)->prev = last;
	*head = last;
}
