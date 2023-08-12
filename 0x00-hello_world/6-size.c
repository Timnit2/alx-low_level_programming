#include <stdio.h>
/**
 * main -entry point
 * descrption : printing all sizeof datatype
 * Return: always 0
 */
int main(void)
{
	printf("size of int = %lu bytes \n", sizeof(int));
	printf("size of char = %lu bytes \n", sizeof(char));
	printf("size of long = %lu bytes \n", sizeof(long));
	printf("size of float = %lu bytes \n", sizeof(float));
	printf("size of double = %lu bytes \n", sizeof(double));
	return (0);
}
