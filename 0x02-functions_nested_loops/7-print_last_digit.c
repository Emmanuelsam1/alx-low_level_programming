#include "main.h"
/**
 * print_last_digit - function to print last digit
 * @a: function parameter
 * Return: c
 */

int print_last_digit(int a)
{
	int c;

	c = a % 10;
	if (a < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}
