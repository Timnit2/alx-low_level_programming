#include <stdio.h>
/**
 * main - enrty point
 * description : putchar base 10
 * Return: always 0
 */
int main(void)
{
	int btn;

	while (btn < 10)
	{
		putchar("%d", btn);
		btn++;
	}
	putchar("\n");
	return (0);
}
