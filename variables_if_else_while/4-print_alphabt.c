#include <stdio.h>
/**
 *main - Write a program that prints the alphabet in lowercase
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	char w;

	for (w = 'a' ; w <= 'z' ; w++)
	{
		if (w != 'e' && w != 'q')
		{
			putchar(w);
		}
	}
putchar('\n');
return (0);
}
