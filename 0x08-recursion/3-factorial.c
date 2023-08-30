#include "main.h"
/**
 * factorial - printing factorial any no
 * @n: the no that you enter
 * Return: -1 if lessthan 0, 1 if 0,n * factorial(n - 1) if greater 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
