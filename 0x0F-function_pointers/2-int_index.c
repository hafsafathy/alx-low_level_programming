#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: is pointer to array
 * @size: is the number of elements in the array array.
 * @cmp: is a pointer to the function to be used to compare values.
 * Return: The index of the first element for witch the cmp function
 * does not return 0,
 * If no element matches, return -1,
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
