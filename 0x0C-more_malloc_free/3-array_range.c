#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates and array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: int pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int i, k;
	int *a;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	a = malloc(sizeof(int) * k);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
