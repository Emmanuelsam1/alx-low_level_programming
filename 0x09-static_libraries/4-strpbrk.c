#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence in the string s of any of the bytes
 *            in the string accept.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the characters to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *tmp = accept;
	while (*tmp != '\0')
	{
		if (*s == *tmp)
		{
			return (s);
		}
		tmp++;
	}
	s++;
	}
	return (NULL);
}
