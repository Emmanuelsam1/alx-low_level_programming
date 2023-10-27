#include "main.h"
/**
 * get_endianness - check system byte order
 * Return: 0 if big edian and 1 if little edian
 */

int get_endianness(void)
{
	int i = 1;
	int little_or_big;

	little_or_big = (int) (((char *)&i)[0]);
	return (little_or_big);
}
