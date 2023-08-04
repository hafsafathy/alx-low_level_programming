#include "main.h"

/**
 * print_binary - function that prints a binary representation of a number.
 * @n: number .
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int f = 0, max = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (f == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			f = 1;
		}
		max >>= 1;
	}
}
