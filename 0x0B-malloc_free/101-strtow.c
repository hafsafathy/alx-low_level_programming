#include "main.h"
#include <stdlib.h>

/**
 * count - count the number of words in a string.
 * @s: input.
 * Return: number of words.
 */
int count(char *s)
{
	int f, i, j;

	f = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			j++;
		}
	}

	return (j);
}
/**
 * strtow -function that concatenates all the arguments of your program.
 * @str: input.
 * Return: pointer to a new string, or NULL if it fails.
 */
char **strtow(char *str)
{
	char **p, *ptr;
	int i, w, s, e;
	int t = 0,  k = 0, c = 0;

	while (*(str + t))
		t++;
	w = count(str);
	if (w == 0)
		return (NULL);

	p = (char **) malloc(sizeof(char *) * (w + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= t; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				ptr = (char *) malloc(sizeof(char) * (c + 1));
				if (ptr == NULL)
					return (NULL);
				while (s < e)
					*ptr++ = str[s++];
				*ptr = '\0';
				p[k] = ptr - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	p[k] = NULL;

	return (p);
}
