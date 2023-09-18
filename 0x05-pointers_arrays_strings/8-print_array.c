#include "main.h"

/**
 * print_array - function prints an array
 * @a: array to be used
 * @n: number of arrays to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0 ; c < n ; c++)
	{
		printf("%d", a[c]);
		if (c < n - 1)
			printf(", ");
	}
	printf("\n");
}
