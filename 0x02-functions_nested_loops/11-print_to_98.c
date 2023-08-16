#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing all nomber from 1 to 98
 * @n: starting no
 */
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num < 98; num++)
			printf("%d, ", num);
	}
	else
	{
		for (num = n; num > 98; num--)
			printf("%d, ", num);
	}
	printf("98\n");
}
