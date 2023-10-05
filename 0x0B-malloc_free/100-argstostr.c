#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments into a single string
 * @ac: The number of arguments
 * @av: An array of argument strings
 * Return: If ac is 0 or av is NULL, returns NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, n = 0;
	int count = 0;
	char *output;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	output = malloc(sizeof(char) * count + 1);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			output[n] = av[i][j];
			n++;
		}
		output[n++] = '\n';
	}
	output[n] = '\0';
	return (output);
}
