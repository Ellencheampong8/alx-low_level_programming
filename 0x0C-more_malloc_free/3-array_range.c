#include <stdlib.h>
#include "main.h"

/**
 * *array_range - it creates an array of integers
 * @min: the minimum range of values
 * @max: the maximum range of values
 *
 * Return: returns pointer to a new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
