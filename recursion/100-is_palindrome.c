#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* is_palindrome_recursive - Helper fonction to check if a string is a palindrome
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
	return is_palindrome_recursive(s, left + 1, right - 1);
}

/**
* is_palindrome - Checks if a string is a palindrome
* @s: The string to check
*
* Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len = strlen(s);
	if (len == 0)
		return (1);
	return is_palindrome_recursive(s, 0, len - 1);
}
