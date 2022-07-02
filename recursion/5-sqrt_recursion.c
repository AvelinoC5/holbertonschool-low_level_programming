#include "main.h"

/**
 *Square_Root - Auxiliary function that will do the process
 *@i: is type int
 *@n: is type int
 *Description: operation square root
 *Return: square root
 */

int Square_Root(int n, int i)
{
	if (i <= n)
	{
		if (i * i == n)
			return (i);
		else
			return (Square_Root(n, i + 1));
	}
	else
		return (-1);
}

/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: is type int
 *Description: returns the natural square root of a number
 *Return: returns square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (Square_Root(n, 1));
}
