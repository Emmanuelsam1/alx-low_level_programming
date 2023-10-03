#include<stdio.h>
#include<stdlib.h>

/**
*main - Calculates the minimum number of coins to make change
*@argc: The number of command-line arguments
*@argv: An array containing the command-line arguments
*Description: This program calculates the minimumnum
*Return: 0 if successful, 1 if there is an error
*/

int main(int argc, char *argv[])
{
	int cents, mncoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		mncoin += 1;
	}
	printf("%d\n", mncoin);
	return (0);
}
