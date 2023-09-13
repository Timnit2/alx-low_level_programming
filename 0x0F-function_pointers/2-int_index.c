#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searching integer
 * @array: array
 * @size: the no of element in array
 * @cmp: is the pointer of function
 * Return: -1 if no element maths and size is 0 or less
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	a = 0;
	while (a < size)
	{
		if (cmp(array[a] != 0)
				a++;
				return (a);
				}
				return (-1);
				}

