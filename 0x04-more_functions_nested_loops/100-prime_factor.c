#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, fac;

	n = 612852475143;
	for (fac = 2; fac <= n; fac++)
	{
		if (n % fac == 0)
		{
			n /= fac;
			fac--;
		}
	}
	printf("%ld\n", fac);
	return (0);
}
