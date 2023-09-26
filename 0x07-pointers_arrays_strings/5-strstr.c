#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of the substring
 * @haystack: input one
 * @needle: input two
 * Return: Always 0 on (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (;*haystack != '\0' ; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
