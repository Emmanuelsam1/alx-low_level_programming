#include <stdarg.h>
#include "variadic_function.h"

/**
 * print_strings - Print strings passed to a functio as parameter
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 * @...: Variable number of integer arguments.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	char *str;
	unsigned int i;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr_str);
	printf("\n");
}
