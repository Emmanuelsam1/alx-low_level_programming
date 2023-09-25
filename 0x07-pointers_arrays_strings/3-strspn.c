#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring consisting of characters
 *           found in the "accept" string.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the characters to accept.
 * @count: number of byte.
 * Return: The number of bytes in the initial segment of s consisting of only characters from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_accept[256] = {0};

	while (*accept != '\0')
	{
		is_accept[(unsigned char)*accept] = 1;
		accept++;
	}

	while (*s != '\0' && is_accept[(unsigned char)*s])
	{
		count++;
		s++;
	}

	return (count);
}
