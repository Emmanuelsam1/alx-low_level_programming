#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc:argument count
 * @argv: argument vector
 *
 * Description: takes in two interger arguments and multiplies them
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;

	int num2;

	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
