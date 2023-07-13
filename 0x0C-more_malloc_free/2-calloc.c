#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: input.
 * @size: input.
 * Return: pointer to allocated memory,
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(p + i) = 0;

	return (p);
}
