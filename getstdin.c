#include "monty.h"

/**
 * read_buffer - reads from a file descriptor into a buffer
 * @file: file descriptor to read from
 * @buffer: buffer to store the data
 * @start: pointer to the start index of the buffer
 * @end: pointer to the end index of the buffer
 *
 * Return: number of bytes read, or -1 on error or EOF
 */
ssize_t read_buffer(int file, char *buffer, int *start, int *end)
{
	ssize_t r;

	if (*start >= *end)
	{
		r = read(file, buffer, 1024);
		if (r <= 0)
			return (r);
		*start = 0;
		*end = r;
	}
	return (1);
}

/**
 * check_newline - checks if a buffer contains a newline character
 * @buffer: buffer to check
 * @start: start index of the buffer
 * @end: end index of the buffer
 *
 * Return: index of the newline character, or -1 if not found
 */
int check_newline(char *buffer, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
	{
		if (buffer[i] == '\n')
			return (i);
	}
	return (-1);
}

/**
 * getstdin - reads an entire line from a file descriptor
 * @lineptr: pointer to the buffer that will store the line
 * @file: file descriptor to read from
 *
 * Return: number of characters read, or -1 on error or EOF
 */
ssize_t getstdin(char **lineptr, int file)
{
	static char buffer[1024];
	static int start, end;
	int i, j, r, nl;
	char *tmp;

	if (lineptr == NULL)
		return (-1);
	if (*lineptr == NULL)
	{
		*lineptr = malloc(1024);
		if (*lineptr == NULL)
			return (-1);
	}
	for (i = 0; i < 1024; i++)
	{
		r = read_buffer(file, buffer, &start, &end);
		if (r <= 0)
			return (r);
		nl = check_newline(buffer, start, end);
		if (nl != -1)
		{
			j = nl - start + 1;
			memcpy((*lineptr) + i, buffer + start, j);
			(*lineptr)[i + j] = '\0';
			start = nl + 1;
			return (i + j);
		}
		(*lineptr)[i] = buffer[start];
		start++;
		if (i == 1023)
		{
			tmp = _realloc(*lineptr, i + 1, i + 1025);
			if (tmp == NULL)
				return (-1);
			*lineptr = tmp;
		}
	}
	return (i);
}

