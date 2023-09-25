#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in the string s
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);  /* Found the character, return its address. */
		}
		s++;
	}

	if (*s == c)
	{
		return (s);  /* Handle the case where c is the null terminator. */
	}

	return (NULL);  /* Character not found. */
}
