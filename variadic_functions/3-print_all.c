#include "variadic_functions.h"
/**
 * print_all - function prints anything.
 * @*: pointer to param.
 * @format: list of argument types passed to function.
 * c: char
 * i: interger
 * f: float
 * s: char * (if NULL print (nil) instead)
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *separator = "";
	unsigned int i;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
