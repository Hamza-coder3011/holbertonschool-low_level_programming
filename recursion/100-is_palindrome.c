#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* clean_string - Removes non-alphanumeric characters and converts to lowercase
* @s: The original string
* @cleaned: The buffer to store the cleaned string
*
* Return: The length of cleaned string
*/
int clean_string(char *s, char *cleaned)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isalnum(s[i]))
		{
			cleaned[j++] = tolower(s[i]);
		}
	}
	cleaned[j] = '\0';

	return (j);
}

/**
* is_palindrome - Checks if a string is a palindrome, ignoring spaces and case.
* @s: The input string
*
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	char cleaned[1000];
	int len = clean_string(s, cleaned);
	int left, right;

	if (len == 0)
	{
		return (1);
	}

	left = 0;
	right = len - 1;

	while (left < right)
	{
		if (cleaned[left] != cleaned[right])
			return (0);

		left++;
		right--;
	}
	return (1);
}
