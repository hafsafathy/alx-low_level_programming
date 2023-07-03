#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: input string.
 * Return: pointer to the resulting string dest.
 */

char *rot13(char *s)
{
	int c = 0, i;
	char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char output[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + c) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + c) == input[i])
			{
				*(s + c) = output[i];
				break;
			}
		}
		c++;
	}

	return (s);
}
