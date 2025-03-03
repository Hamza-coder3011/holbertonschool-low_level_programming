#include <stdio.h>
#include <string.h>

#define PASSWORD ""

int main()
{
	char input[100];

	printf("Enter the password: ");
	fgets(input, sizeof(input), stdin);

	input[strcspn(input, "\n")] = 0;

	if (strcmp(input, PASSWORD) == 0)
	{
		printf("Password is correct!\n");
	}
	else
	{
		printf("Incorrect password!\n");
	}
	return 0;
}
