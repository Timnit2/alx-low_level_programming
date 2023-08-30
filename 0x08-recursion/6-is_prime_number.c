#include "main.h"
int check_prime(int n, int a);
/**
 * is_prime_number - checking if it is prime no
 * @n: is the no to check
 * Return: 1 if n is prime no, 0 not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}
/**
 * check_prime -ckecking if n is prime
 * @n: is the no to check if it is prime
 * @a: iterator
 * Return: 1 if it is prime, 0 if it is not prime
 */
int check_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (check_prime(n, a - 1));
}

