#include <stdio.h>
/**
* largest_prime_factor - Finds the largest prime factor of a given number
* @n: The number whose largest prime factor is to be found
*
* Return: The largest prime factor
*/
long largest_prime_factor(long n)
{
	long factor = 2;

	while (factor * factor <= n)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}
	return (n);
}

/**
* main - Entry point of program
*
* Return: 0 on success
*/
int main(void)
{
	long number = 612852475143;
	long largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);
	return (0);
}
