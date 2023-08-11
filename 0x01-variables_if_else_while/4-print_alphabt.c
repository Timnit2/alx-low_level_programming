#include <stdio.h>
/**
 * main - entry point
 * description : printing all samll letter except qand e
 * Return: always 0
 */
int main(void)
{
	char smal = 'a';

	while (smal <= 'z')
	{
		if (smal != 'e' && smal != 'q')
		{
			putchar(smal);
		}
		smal++;
	}
	putchar('\n');
	return (0);
}
