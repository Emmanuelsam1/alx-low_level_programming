#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing the characters to accept
 * Return: The number of bytes in the initial segment of s consists of accept
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
