#include <stdio.h>

/**
 * main - Prints numbers between 01 to 89 with commas and space
 *
 * Return: Always 0 for success
 */
int main(void)
{
int m;
int n;

for (m = '0'; m <= '8'; m++)
	{

	for (n = m + 1; n <= '9'; n++)
	{
	putchar(m);
	putchar(n);

	if (m != '8' || n != '9')

	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');
	return (0);
}
