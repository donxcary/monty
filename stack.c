#include "monty.h"

/**
 * p_stack - sets the format of the data to a stack (LIFO)
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: sets the global variable lifi to 0
 */
void p_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
