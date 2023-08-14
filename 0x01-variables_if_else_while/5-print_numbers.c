#include <stdio.h>
/**
 * main  - entry point
 * description : printing base 10
 * Return: always 0
 */
int main(void)
{
	int btn = 0;

	while (btn < 10)
	{
		printf("%d", btn);
		btn++;
	}
	printf("\n");
	return (0);
}
