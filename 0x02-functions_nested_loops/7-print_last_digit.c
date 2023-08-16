#include "main.h"

/**
 * print_last_digit - printing the last digit
 * @n: n0 to print last digit
 * Return: value of last no
 */
int print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (num < 0)
	{
		num = -num;
	}
	_putchar(num + '0');
	return (num);
}
