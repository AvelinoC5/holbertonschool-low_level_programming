#include "main.h"

/**
 * _strncat - function that concatenates two strings with n chars in src
 * @dest: Pointer char dest
 * @src: Pointer char src
 * @n: Parameter n(number of chars to concatenate)
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
