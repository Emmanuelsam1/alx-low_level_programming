#include "main.h"

/**
 * _strlen - function retuns long lenght of string
 * @s: parameter to be counted
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i;
	int counts = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		counts++;
	return (counts);
}
