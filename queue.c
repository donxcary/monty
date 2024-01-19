#include "monty.h"

/**
 * p_queue - sets the format of the data to a queue (FIFO)
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: sets the global variable lifi to 1
 */
void p_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
