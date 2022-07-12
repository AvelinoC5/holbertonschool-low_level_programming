#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *array_range - create array of int
 *@min: range min
 *@max: range max
 *Return: newly created array
 */

int *array_range(int min, int max)
{
	int i = 0, range = 0, *array = NULL;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	array = malloc(sizeof(int) * range);

	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < range ; i++, min++)
		array[i] = min;

	return (array);
}
