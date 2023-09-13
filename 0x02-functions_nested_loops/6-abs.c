#include "main.h"
/**
 * _abs -  functionn for absolute value of integer
 * @b: function of parameter
 * Return: -b or b
 */

int _abs(int b)
{
	if (b < 0)
		return (-b);
	else if (b >= 0)
	{
		return (b);
	}

	return (0);
}
