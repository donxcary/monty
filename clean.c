#include "monty.h"

/**
 * clean_line - removes leading and trailing spaces and comments from a line
 * @content: pointer to the line to be cleaned
 *
 * Return: pointer to the cleaned line, or NULL if it is empty or a comment
 */

char *clean_line(char *content)
{
	char *clean;
	int i, j, k, len;

	len = strlen(content);
	clean = malloc(len + 1);
	if (clean == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (!isspace(content[i]))
			break;
	}
	if (i == len || content[i] == '#')
	{
		free(clean);
		return (NULL);
	}
	for (j = len - 1; j >= 0; j--)
	{
		if (!isspace(content[j]))
			break;
	}
	for (k = 0; i <= j; i++, k++)
	{
		if (content[i] == '#')
			break;
		clean[k] = content[i];
	}
	clean[k] = '\0';
	return (clean);
}
