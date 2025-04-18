#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings,
*	using at most n bytes from the second string.
*
* @s1: The first string.
* @s2: The second string.
* @n: The number of bytes from s2 to concatenate.
*
* Return: A pointer to the newly allocated memory containing s1 and
*	the first n bytes of s2, or NULL if memory allocation fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
