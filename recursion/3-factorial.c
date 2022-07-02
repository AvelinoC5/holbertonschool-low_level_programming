#include "main.h"
/**
 *factorial - Entry point
 *@n: is type int
 *Description: returns the factorial of a given number.
 *Return: returns the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
