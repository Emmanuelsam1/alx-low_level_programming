#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: the size of array to create
 * @c: the character to initialize the array with
 * Return: a pointer if succesful, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
