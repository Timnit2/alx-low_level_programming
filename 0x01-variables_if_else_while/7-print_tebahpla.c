#include <stdio.h>
/**
 * main - entry of function
 *description : printing small letter
 *Return: always 0
 */
int main(void)
{
	char mm = 'z';

	while ('a' <= mm)
	{
		putchar(mm);
		mm--;
	}
	putchar('\n');
	return (0);
}
