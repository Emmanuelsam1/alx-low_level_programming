#include "main.h"

/**
 * _puts - function prints string followed by new line
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int z;

	for (z = 0 ; str[z] != '\0' ; z++)
		_putchar(str[z]);
	_putchar('\n');
}
