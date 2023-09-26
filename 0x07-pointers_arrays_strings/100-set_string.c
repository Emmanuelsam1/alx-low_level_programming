#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a character string.
 * @s: Pointer to a pointer to a character string.
 * @to: Pointer to the character string to set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
