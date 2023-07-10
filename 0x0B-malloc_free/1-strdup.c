#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: string.
 * Return: NULL if str = NULL,On success, the _strdup function returns
 * a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ptr[j] = str[j];

	return (ptr);
}
