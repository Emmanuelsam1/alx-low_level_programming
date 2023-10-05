#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
