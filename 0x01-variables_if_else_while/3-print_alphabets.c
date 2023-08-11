#include <stdio.h>
/**
 * main -entry
 * Description: printing small letter and capital letter
 * Return: always 0
 */
int main(void)
{
	char small = 'a';
	char capital = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
