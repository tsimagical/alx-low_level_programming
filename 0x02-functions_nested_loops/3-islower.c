#include <ctype.h>
#include "main.h"

/**
 * is_lower - check lower case
 * Description: check the given character is lower case or not
 * Parameter: c character value
 * Return: 1 if it is lower and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}

