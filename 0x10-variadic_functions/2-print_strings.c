#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: a pointer to a string to be printed
 * @n: no of string
 * Return: nothong
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);
	a = 0;
	while (a < n)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (a != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		a++;
	}
}
