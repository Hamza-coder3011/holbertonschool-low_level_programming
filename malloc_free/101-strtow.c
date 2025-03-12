#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* count_words - Counts the number of words in a string.
* @str: The string to count words in.
*
* Return: The number of words in the string.
*/
int count_words(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;

		if (str[i] != ' ' && str[i] != '\0')
		{

			count++;

			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}

	return (count);
}

/**
* strtow - Splits a string into words.
* @str: The string to split.
*
* Return: A pointer to an array of strings (words),
*	or NULL if it fails.
*/
char **strtow(char *str)
{
	int i = 0, j = 0, word_len = 0, word_count = 0;
	int k;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	while (str[i] != '\0' && j < word_count)
	{
		while (str[i] == ' ' && str[i] != '\0')
			i++;

		word_len = 0;
		while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
			word_len++;

		words[j] = malloc(sizeof(char) * (word_len + 1));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < word_len; k++)
			words[j][k] = str[i + k];
		words[j][word_len] = '\0';

		i += word_len;
		j++;
	}
	words[j] = NULL;
	return (words);
}
