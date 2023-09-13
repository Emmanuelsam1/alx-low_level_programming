#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int a, b, results;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			results = a * b;
			if (b == 0)
				printf("%d, ", results);
			else
			{
				printf("%2d", results);
				if (b != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
