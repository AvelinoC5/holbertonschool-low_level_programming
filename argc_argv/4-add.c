#include <stdio.h>
#include <stdlib.h>

/**
 *main - add positive numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 1 for error or 0 (Succes).
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < 48 || argv[a][b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);

}
