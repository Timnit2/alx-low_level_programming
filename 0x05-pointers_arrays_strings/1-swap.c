#include "main.h"
/**
 * swap_int - swapping integer through pointeir
 * @a:pointer
 * @b:pointer
 */
void swap_int(int *a, int *b)
{
	int sswap;

	sswap = *a;
	*a = *b;
	*b = sswap;
}
