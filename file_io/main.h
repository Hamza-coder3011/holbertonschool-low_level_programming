#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: the name of the file to read.
* @letters: the number of letters to read and print.
*
* Return: the actual number of letters it could read and print, or 0 if failed.
*/
ssize_t read_textfile(const char *filename, size_t letters);

/**
* create_file - creates a file with the specified content.
* @filename: the name of the file to create.
* @text_content: the text to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content);

/**
* append_text_to_file - appends text to the end of a file.
* @filename: the name of the file to append text to.
* @text_content: the text to append.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
