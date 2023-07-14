#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * zero - check if any number zero.
 * @v: argument.
 * Return: no return.
 */
void zero(char **v)
{
	int i, z1 = 1, z2 = 1;

	for (i = 0; v[1][i]; i++)
		if (v[1][i] != '0')
		{
			z1 = 0;
			break;
		}

	for (i = 0; v[2][i]; i++)
		if (v[2][i] != '0')
		{
			z2 = 0;
			break;
		}

	if (z1 == 1 || z2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of array.
 * Return: pointer.
 */
char *_initialize_array(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * checknum - determines length of the number
 * and checks if number is in base 10.
 * @v: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int checknum(char **v, int n)
{
	int ln;

	for (ln = 0; v[n][ln]; ln++)
		if (!isdigit(v[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}

	return (ln);
}
/**
 * main - program that multiplies two positive numbers.
 * @c: number of arguments.
 * @v: arguments.
 * Return: 0.
 */
int main(int c, char **v)
{
	char *res
	int num1, num2, add, d, dl, i, j, k, re;

	if (c != 3)
		printf("Error\n");
		exit(98);
	num1 = checknum(v, 1), num2 = checknum(v, 2);
	zero(v), add = num1 + num2, res = malloc(add + 1);
	if (res == NULL)
		printf("Error\n"), exit(98);
	res = _initialize_array(res, add);
	k = add - 1, i = num1 - 1, j = num2 - 1, re = dl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (dl > 0)
			{
				d = (res[k] - '0') + dl;
				if (d > 9)
					res[k - 1] = (d / 10) + '0';
				res[k] = (d % 10) + '0';
			}
			i = num1 - 1, j--, dl = 0, re++, k = add - (1 + re);
		}
		if (j < 0)
		{
			if (res[0] != '0')
				break;
			add--;
			free(res), res = malloc(add + 1), res = _initialize_array(res, add);
			k = add - 1, i = num1 - 1, j = num2 - 1, re = dl = 0;
		}
		if (j >= 0)
		{
			d = ((v[1][i] - '0') * (v[2][j] - '0')) + (res[k] - '0') + dl;
			dl = d / 10, res[k] = (d % 10) + '0';
		}
	}
	printf("%s\n", res);
	return (0);
}
