#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line.
 * @str: pointer to the string to print
 * Return: no return
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
