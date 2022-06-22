#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = i ; j > 0 ; j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
