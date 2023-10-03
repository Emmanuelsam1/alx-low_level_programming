#include "main.h"

/**
 * _isdigit - function checks for 0 through to 9
 * @c: parameter
 * Return: 1 on success and 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
