#include "main.h"
#include <stdio.h>

/**
 *create_array - funcion that create an array of char
 *@size: size of the array
 *@c: variable c
 *Return: array pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)

		return (NULL);
	for (i = 0 ; i < size ; i++)
		array[i] = c;

	return (array);
}
