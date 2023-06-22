#include "main.h"

/**
 * print_number - prints all numbers.
 * @n: input int.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int num, n_num, count;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}
	else
	{
		num = n;
	}

	n_num = num;
	count = 1;

	while (n_num > 9)
	{
		n_num /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((num / count) % 10) + 48);
	}
}
