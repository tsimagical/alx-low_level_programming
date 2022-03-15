#include <ctype.h>
#include "main.h"

/**
 * _islower - check lower case
 * Description: check the given character is lower case or not
 * @c: a character parameter
 * Return: 1 if it is lower and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}

