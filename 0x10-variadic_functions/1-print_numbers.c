#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print no
 * @separator: is the string print b/n nos
 * @n: the no of integers passed to the func
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);
	a = 0;
	while (a < n)
	{
		printf("%d", va_arg(args, int));
		if (a != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		a++;
	}
	va_end(args);
	printf("\n");
}
