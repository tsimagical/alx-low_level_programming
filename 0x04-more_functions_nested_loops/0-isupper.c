#include "main.h"

/**
* _isupper - checks if c is upper or not
* @c: character
* Return: 1 for true, 0 for false
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
