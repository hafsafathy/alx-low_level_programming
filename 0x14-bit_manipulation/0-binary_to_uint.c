#include "main.h"

/**
 * binary_to_uint - function that converts binary number
 * to an unsigned int.
 * @b: is pointer to string of 0 and 1 char.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bas = 1, res = 0, l = 0;

	if (b == NULL)
		return (0);

	while (b[l])
		l++;

	while (l)
	{
		if (b[l - 1] != '0' && b[l - 1] != '1')
			return (0);

		if (b[l - 1] == '1')
			res += bas;
		bas *= 2;
		l--;
	}
	return (res);
}
