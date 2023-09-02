#include "main.h"
#include <stdio.h>
/**
 * main - printing the no of argument
 * @argv: argument of array
 * @argc: argument counter how many they passed
 * Return: alwyas 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
