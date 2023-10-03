#include "main.h"

/**
 * char *_strcpy - function copies string pointed by strcpy
 * @src: string to be copied
 * @dest: destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
