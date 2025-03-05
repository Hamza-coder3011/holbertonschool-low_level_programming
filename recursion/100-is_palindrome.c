#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* clean_string - Removes non-alphanumeric characters and converts to lowercase
* @s: The original string
* @cleaned: The buffer to store the cleaned string
*
* Return: Length of cleaned string
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
* is_palindrome_recursive - Helper fonction to check if a string is palindrome
* @s: The string to check
* @left: The left index
* @right: The right index
*
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (is_palindrome_recursive(s, left + 1, right - 1));
}

/**
* is_palindrome - Checks if a string is a palindrome
* @s: The string to check
*
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	char cleaned[100];
	int len = clean_string(s, cleaned);

	if (len == 0)
	{
		return (1);
	}
	return (is_palindrome_recursive(cleaned, 0, len - 1));
}
