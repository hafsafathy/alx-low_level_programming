#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: input
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int ndx, m, k, pre;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	pre = ndx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", ndx, array[ndx]);

		if (array[ndx] == value)
			return (ndx);
		k++;
		pre = ndx;
		ndx = k * m;
	} while (ndx < (int)size && array[ndx] < value);

	printf("Value found between indexes [%d] and [%d]\n", pre, ndx);

	for (; pre <= ndx && pre < (int)size; pre++)
	{
		printf("Value checked array[%d] = [%d]\n", pre, array[pre]);
		if (array[pre] == value)
			return (pre);
	}

	return (-1);
}
