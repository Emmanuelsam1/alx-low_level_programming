#include "main.h"

/**
 * _strlen - to get string lenght
 *
 * @s: lenght of string
 * Return: lenght of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * comp_string - compares two character of string
 * @s: string
 * @l: smallest iterator
 * @r: largetst iterator
 * Return: int
 */

int comp_string(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + comp_string(s, l + 1, r - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns a string of palindrome
 *
 * @s: string to be compared
 *
 * Return: 1 if it is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp_string(s, 0, _strlen(s) - 1));
}
