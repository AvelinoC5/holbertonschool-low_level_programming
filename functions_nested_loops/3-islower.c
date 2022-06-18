#include "main.h"

/**
*_islower-Entry point
*@c: is int
*Description: use the prototype for
*retunr 1 if lowercase or print 0
*is not lowercase
*Return 0
*/

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
