#include <stdio.h>
/**
 * main - entry of function
 *description : printing small letter
 *Return: always 0
 */
int main(void)
{
	char mm = 'a';

	while (mm <= 'z')
	{
		putchar(mm);
		mm++;
	}
	putchar('\n');
	return (0);
}
