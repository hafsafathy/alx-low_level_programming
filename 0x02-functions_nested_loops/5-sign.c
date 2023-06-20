#include "main.h"

/**
 * print_sign - Check
 * @n: An input number
 * Description: function prints the sign of the number
 * Return: 1 if number is positive, or 0 if number is zero
 * , or -1 if number is negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	else
	{
		value = 0;
		_putchar('0');
	}
	return (value);
}
