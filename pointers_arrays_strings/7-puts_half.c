#include "main.h"

/**
 * puts_half - Write a function that prints half of a string
 * followed by a new line
 * @str: pointer str
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i - 1) / 2;
		i++;
	}

	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
