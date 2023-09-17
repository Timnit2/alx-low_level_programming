#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - display total no
 * sum_them_all - it will display sum of n no
 * @n: no that we ad
 * Return: return toatal summtion
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	int total = 0;

	va_start(args, n);
	a = 0;
	while (a < n)
	{
		total += va_arg(args, int);
		a++;
	}
	va_end(args);
	return (total);
}

