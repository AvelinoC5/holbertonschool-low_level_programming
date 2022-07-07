#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: Pointer char s1
 * @s2: Pointer char s2
 * Return: Comparison of strings with a subtraction (difference)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++)
	{}
	return (s1[i] - s2[i]);
}
