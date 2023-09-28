#include "main.h"
#include <stdio.h>

/**
 * factorial - prints factorial of a given number
 * @n: the number which calculates the  the factorial
 * Return: the factorial of n, or -1 if n is negativ
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
