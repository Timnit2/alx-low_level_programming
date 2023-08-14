#include <stdio.h>
/**
 * main - enrty point
 * description : putchar base 10
 * Return: always 0
 */
int main(void)
{
	int btn = 0;

	while (btn < 10)
	{
		putchar(btn + '0');
		btn++;
	}
	putchar('\n');
	return (0);
}
