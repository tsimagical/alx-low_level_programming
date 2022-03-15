#include <ctype.h>
#include "main.h"

/**
 * is_lower - check lower case
 * Description: check the given character is lower case or not
 * @param c character value
 * @return 1 if it is lower and 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}

