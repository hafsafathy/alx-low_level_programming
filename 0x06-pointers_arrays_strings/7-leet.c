#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s:input string.
 * Return: encode string.
 */
char *leet(char *s)
{
	int i = 0, j;
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     ch[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == ch[j])
				s[i] = num[j];

		i++;
	}

	return (s);
}
