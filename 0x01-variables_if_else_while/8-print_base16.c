#include <stdio.h>
/**
 * main - entry point
 * description : printing base 16
 * Return: always 0
 */
int main(void)
{
	int no = 0;
	char mm = 'a';

	while (no <= 9)
	{
		putchar(no + '0');
		no++;
	}
	while (mm <= 'f')
	{
		putchar(mm);
		mm++;
	}
	putchar('\n');
	return (0);
}
