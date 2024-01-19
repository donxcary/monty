#include "monty.h"

/**
 * free_stack - frees a stack_t list
 * @head: pointer to the head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
