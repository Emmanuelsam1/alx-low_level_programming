#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers followed by a newline.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 * @...: Variable number of integer arguments
 * REturn: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i, arr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
