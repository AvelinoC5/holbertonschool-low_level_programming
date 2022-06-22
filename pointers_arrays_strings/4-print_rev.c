#include "main.h"
#include <string.h>

/**
 * print_rev - that prints a string (inreverse) followed by a new line
 * @s: Pointer char s
 */

void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
