#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a character
 * @c: The character to print
 */
void print_char(char c)
{
	printf("%c", c);
}

/**
 * print_int - Prints an integer
 * @n: The integer to print
 */
void print_int(int n)
{
	printf("%d", n);
}

/**
 * print_float - Prints a float
 * @f: The float to print
 */
void print_float(float f)
{
	printf("%f", f);
}

/**
 * print_string - Prints a string, or (nil) if it's NULL
 * @str: The string to print
 */
void print_string(char *str)
{
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints anything based on the format provided.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int printed = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (printed && (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
		printf(", ");

		switch (format[i])
		{
			case 'c':
				print_char(va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				print_int(va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				print_float(va_arg(args, double));
				printed = 1;
				break;
			case 's':
				print_string(va_arg(args, char *));
				printed = 1;
				break;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
