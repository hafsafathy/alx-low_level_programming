#include "main.h"
#include <stdlib.h>

/**
 * strtow -function that concatenates all the arguments of your program.
 * @str: input.
 * Return: pointer to a new string, or NULL if it fails.
 */
char **strtow(char *str)
{
	char **ptr;
	int i = 0, k = 0, t = 0, c = 0;
	int j, l;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
				((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			c++;
	}
	if (c == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (c + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < c; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			t = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, t++;
			ptr[k] = malloc((t + 1) * sizeof(char));
			if (ptr[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(ptr[k]);
				free(ptr);
				return (NULL);
			}
			for (l = 0; l < t; l++, i++)
				ptr[k][l] = str[i];
			ptr[k++][l] = '\0';
		}
	}
	ptr[k] = NULL;
	return (ptr);
}
