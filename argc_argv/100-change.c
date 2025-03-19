#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the program
* @argc: Argument count
* @argv: Argument vector
*
* Description: This program calculates the minimum number of coins,
* needed to make change for an amount of money.
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int cents, num_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", num_coins);
	return (0);
}
