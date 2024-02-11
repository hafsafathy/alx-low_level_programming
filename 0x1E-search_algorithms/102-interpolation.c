#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 * @array: input
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t kpoo, kl, kh;
	double f;

	if (array == NULL)
		return (-1);

	kl = 0;
	kh = size - 1;

	while (size)
	{
		f = (double)(kh - kl) / (array[kh] - array[kl]) * (value - array[kl]);
		kpoo = (size_t)(kl + f);
		printf("Value checked array[%d]", (int)kpoo);

		if (kpoo >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[kpoo]);
		}

		if (array[kpoo] == value)
			return ((int)kpoo);

		if (array[kpoo] < value)
			kl = kpoo + 1;
		else
			kh = kpoo - 1;

		if (kl == kh)
			break;
	}

	return (-1);
}
