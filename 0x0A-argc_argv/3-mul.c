#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multi of the two no
 * @argv: argument vector
 * @argc: argument counter
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
