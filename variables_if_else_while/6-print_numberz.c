#include <stdio.h>
/**
 *main - Write a program that prints the alphabet in lowercase
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58 ; n++)
	{
		putchar(n);
	}
putchar('\n');
return (0);
}
