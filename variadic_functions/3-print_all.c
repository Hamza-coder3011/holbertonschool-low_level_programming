#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Prints anything based on the format provided.
* @format: List of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char c;
	int n;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		if (printed)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				printed = 1;
				break;
			case 'i':
				n = va_arg(args, int);
				printf("%d", n);
				printed = 1;
				break;
			case 'f':
				f = va_arg(args, int);
				printf("%f", f);
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				printed = 1;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
