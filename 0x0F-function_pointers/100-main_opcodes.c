#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints the opcodes
 * @argv: vector argument
 * @argc: the no of argument
 * Return:1 0r 2 if it is error,otherwise always 0
 */
int main(int argc, char *argv[])
{
	int a, n;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;

	for (a = 0; a < n; a++)
	{
		printf("%02x", ptr[a]);
		if (a < n - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
