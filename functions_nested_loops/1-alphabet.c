#include "main.h"
/**
 * print_alphabet using _putchar
 * by new line
 *Return: 0
 */
void print_alphabet(void);
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
