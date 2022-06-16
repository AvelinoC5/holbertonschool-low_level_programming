#include <stdio.h>
/**
 *main - Write a program that prints the alphabet in lowercase
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	char q;

	for (q = 'a' ; q <= 'z' ; q++)
	{
		putchar(q);
	}
	for (q = 'A' ; q <= 'Z' ; q++)
	{
		putchar(q);
	}
putchar('\n');
return (0);
}
