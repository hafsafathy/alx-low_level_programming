#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n--)
	{
		j = a[i];
		a[i++] = a[n];
		a[n] = j;
	}
}
