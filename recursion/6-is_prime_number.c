#include "main.h"
#include <stdio.h>
/**
* is_prime_helper - Recursively checks if a number is prime.
* @n: The number to check.
* @div: The current divisor, starting at 2.
*
* Return: 1 if n is prime, 0 otherwise.
*/
int is_prime_helper(int n, int div)
{
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);

	return (is_prime_helper(n, div + 1));
}
/**
* is_prime_number - Checks is a number is prime.
* @n: The number to check.
*
* Return: 1 if n is prime, otherwise 0.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}
