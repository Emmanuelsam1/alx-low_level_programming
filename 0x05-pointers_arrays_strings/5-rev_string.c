#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char z;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		z = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = z;
	}
}
