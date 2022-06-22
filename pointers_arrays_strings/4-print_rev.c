#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by new line
 * @s: string to be print
 */

void print_rev(char *s)
{
	int i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	for (i--; i >= 0; i--)

		_putchar(*(s + i));

	_putchar(i);
}
