#include "main.h"
/**
 * reverse_array - reverse array
 * @a:a pointer an array
 * @n: no of element
 */
void reverse_array(int *a, int n)
{
	int c = 0;
	int b = n - 1;

	while (c < b)
	{
		int swap = a[c];

		a[c] = a[b];
		a[b] = swap;
		c++;
		b--;
	}
}
