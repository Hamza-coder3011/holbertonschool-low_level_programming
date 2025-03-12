#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* count_words - Counts the number of words in a string
* @str: The input string
* Return: The number of words in the string
*/
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str != ' ' && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == ' ' && in_word)
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}
/**
* allocate_word - Allocates memory for a word and copies it
* @word_start: The start of the word
* @word_len: The length of the word
* Return: A pointer to the allocated word, or NULL if failed
*/
char *allocate_word(char *word_start, int word_len)
{
	char *word = malloc(word_len + 1);

	if (word == NULL)
		return (NULL);

	strncpy(word, word_start, word_len);
	word[word_len] = '\0';

	return (word);
}
/**
* free_words - Frees the memory allocated for the words
* @words: The array of words
* @i: The number of words to free
*/
void free_words(char **words, int i)
{
	int j;
	for (j = 0; j < i; j++)
		free(words[j]);

	free(words);
}
/**
* strtow - Splits a string into words
* @str: The input string
* Return: A pointer to an array of strings (words),
*	or NULL if failed
*/
char **strtow(char *str)
{
	int num_words;
	char **words;
	int i;
	char *word_start = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	i = 0;


	while (*str)
	{
		if (*str != ' ' && word_start == NULL)
		{
			word_start = str;
		}
		else if ((*str == ' ' || *(str + 1) == '\0') && word_start != NULL)
		{
			int word_len = str - word_start + (*str != ' ');

			words[i] = allocate_word(word_start, word_len);

			if (words[i] == NULL)
			{
				free_words(words, i);
				return (NULL);
			}
			i++;
			word_start = NULL;
		}
		str++;
	}
	words[i] = NULL;
	return (words);
}
