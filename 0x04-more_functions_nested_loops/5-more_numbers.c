#include "main.h"

/**
 * more_numbers - prints number 0 to 14.
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int num;
	int count = 0;

	while (count < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		count++;
		_putchar('\n');
	}
}
