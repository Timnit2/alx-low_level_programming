#include <stdio.h>
/**
 * main - entry point
 * description : printg no separeted by ,
 * Return: always 0
 */
int main(void)
{
	int mm = 48;

	while (mm <= 57)
	{
		putchar(mm);
		mm++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
