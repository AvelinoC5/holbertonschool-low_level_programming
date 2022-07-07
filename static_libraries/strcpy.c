#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by sr.
 * @dest: Pointer char dest
 * @src: Pointer char src
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
