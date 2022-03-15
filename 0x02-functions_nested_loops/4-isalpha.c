#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check check alphabetic character
 * @c: a character parameter
 * Return: 1 if it is lower and 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}

