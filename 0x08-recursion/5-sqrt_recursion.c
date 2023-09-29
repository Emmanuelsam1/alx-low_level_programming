#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number for which to calculate the square root
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{

	return (sqrt_a(n, 0));
}

/**
 * sqrt_a - return natural square root of a number
 * @i: The number for which to calculate the square root.
 * @a: iterator
 * Return: The square root or -1
 */
int sqrt_a(int a, int i)
{
	if (i * i == a)
	{
		return (i);
	}

	else if (i * i > a)
	{
		return (-1);
	}
	return (sqrt_a(a, i + 1));
}
