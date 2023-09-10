#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * array_range - dipslay array element ascending
 * @min: minmum value of the array
 * @max: maximaum value of array
 * Return: null if npo element on the arry, otherwise ptr
 */
int *array_range(int min, int max)
{
	int *ptr_ary;
	int a;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (ptr_ary == NULL)
		return (NULL);
	for (a = 0; a <= max - min; a++)
		ptr_ary[a] = min + a;
	return (ptr_ary);
}

