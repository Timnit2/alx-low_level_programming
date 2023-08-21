#include "main.h"
/**
 * print_array - printing element of arry the same order
 * @a: name of the array
 * @n:the no of elements of the array
 */
void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", a[b]);
		if (b != n - 1)
			printf(" ");
		b++;
	}
	printf("\n");
}
