#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first input.
 * @s2: second input.
 * @n: input.
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int t1, t2, nstr, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (t1 = 0; s1[t1] != '\0'; t1++)
		;

	for (t2 = 0; s2[t2] != '\0'; t2++)
		;

	if (n > t2)
		n = t2;

	nstr = t1 + n;

	str = malloc(nstr + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < nstr; i++)
		if (i < t1)
			str[i] = s1[i];
		else
			str[i] = s2[i - t1];

	str[i] = '\0';

	return (str);
}
