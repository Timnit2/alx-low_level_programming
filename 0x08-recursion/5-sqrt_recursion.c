#include "main.h"
int res_sqrt_recursion(int n, int a);
/**
 * _sqrt_recursion - printing the root no
 * @n:the no that will chekh
 * Return: root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (res_sqrt_recursion(n, 0));
}
/**
 * res_sqrt_recursion - calculate the root square no
 * @a: root no
 * @n: natural no
 * Return: the result square root of n
 */
int res_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (res_sqrt_recursion(n, a + 1));
}

