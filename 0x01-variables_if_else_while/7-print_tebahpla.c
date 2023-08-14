#include <stdio.h>
/**
 * main - entry point
 * description : printing small letter
 * return: always 0
 */
int main(void)
{
	char mm = 'a';

	while ('a' < 'z')
	{
		putchar(mm + 'a');
		mm++;
	}
	putchar('\n');
	return (0);
}
