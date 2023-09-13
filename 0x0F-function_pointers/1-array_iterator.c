#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - excuete array
 * @array: array it self
 * @action: point of the function
 * @size: size of the array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	a = 0;
	while (a < size)
	{
		action(array[a]);
	a++;
	}
}

