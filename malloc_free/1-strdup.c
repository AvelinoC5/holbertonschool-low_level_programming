#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: a pointer to a new string which is a duplicate
 */

char *_strdup(char *str)
{
	int a, b;
	char *p;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		;
	a++;

	p = malloc(a * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
	{
		p[b] = str[b];
	}

	return (p);
}
