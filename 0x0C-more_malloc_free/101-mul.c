#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The input string
 * Return: 1 if it's a positive number, 0 otherwise
 */

int is_positive_number(char *str)
{
	if (*str == '\0')
	return (0);

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		return (0);
		str++;
	}

	return (1);
}

/**
 * multiply - Multiply two positive numbers
 * @num1: The first positive number
 * @num2: The second positive number
 *
 * Return: The result of the multiplication
 */

int multiply(char *num1, char *num2)
{
	return (atoi(num1) * atoi(num2));
}

/**
 * main - function
 * @argv: argument vector
 * @argc: argument count
 * Return: void
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);

	printf("%d\n", result);

	return (0);
}
