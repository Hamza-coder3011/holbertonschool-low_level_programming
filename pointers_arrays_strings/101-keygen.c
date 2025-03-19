#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
void generate_password(char *password)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	size_t i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH - 1; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	password[PASSWORD_LENGTH - 1] = '\0';
}
int main(void)
{
	char password[PASSWORD_LENGTH];

	generate_password(password);

	printf("Generated password: %s\n", password);

	return 0;
}
