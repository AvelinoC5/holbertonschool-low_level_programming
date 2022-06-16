#include <stdio.h>
/**
 *main - Print all the numbers of base 16 in lowercase
 *followed by a new line
 *Return: 0
 */
int main(void)
{
	int n;
	char q;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (q = 'a' ; q <= 'f' ; q++)
	{
		putchar(q);
	}
putchar('\n');
return (0);
}
