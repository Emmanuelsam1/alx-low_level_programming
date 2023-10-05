#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @str: string
 * Return: If memory allocation fails, return NLL
 */

unsigned int _strlen(char *str);

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	concatenated = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}

/**
 * _strlen - Returns the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */

unsigned int _strlen(char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = _strlen(str);

	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
