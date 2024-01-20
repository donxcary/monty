#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */

typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
ssize_t read_buffer(int file, char *buffer, int *start, int *end);
int check_newline(char *buffer, int start, int end);
char  *clean_line(char *content);
void p_push(stack_t **head, unsigned int number);
void p_pall(stack_t **head, unsigned int number);
void p_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void p_pop(stack_t **head, unsigned int counter);
void p_swap(stack_t **head, unsigned int counter);
void p_add(stack_t **head, unsigned int counter);
void p_nop(stack_t **head, unsigned int counter);
void p_sub(stack_t **head, unsigned int counter);
void p_div(stack_t **head, unsigned int counter);
void p_mul(stack_t **head, unsigned int counter);
void p_mod(stack_t **head, unsigned int counter);
void p_pchar(stack_t **head, unsigned int counter);
void p_pstr(stack_t **head, unsigned int counter);
void p_rotl(stack_t **head, unsigned int counter);
void p_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void p_queue(stack_t **head, unsigned int counter);
void p_stack(stack_t **head, unsigned int counter);
int is_number(char *s);
#endif
