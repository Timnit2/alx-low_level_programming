#include "main.h"
#include <cmath>

/**
 * _pow_recursion - power function
 * @x: a number
 * @y: a power of the x
 * Return: -1 if lessthan 0, pow(x, y) if not 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
