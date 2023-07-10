#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates
 * all the arguments of your program.
 * @ac: input.
 * @av: input.
 * Return: NULL if ac == 0 or av == NULL,
 * pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	p = malloc((c + 1) * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			p[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			p[k] = av[i][j];
	}
	p[k] = '\0';

	return (p);
}
