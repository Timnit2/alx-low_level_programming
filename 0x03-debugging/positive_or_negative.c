#include "main.h"
/**
 * positive_or_negative- specifiy wheter negative or positive.
 * @i: is the no to be checked
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "postive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}

