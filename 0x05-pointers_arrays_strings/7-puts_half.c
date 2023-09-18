#include "main.h"

/**
 * puts_half - prints hald of a string
 * @str: function to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i, z, count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	z = (count - 1) / 2;
	for (i = z + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
