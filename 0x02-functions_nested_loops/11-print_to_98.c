#include "main.h"
/**
 * print_to_98 - prints the numbers to 98
 */
void print_to_98(int n)
{
	int i;
	int y;
	
	if (n > 98)
		i = -1;
	else
		i = 1;
	for (y = n ; y <= 98 ; y = y + i)
	{
		if (y >= 10)
		{
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}
		else
		{
			_putchar(y + '0');
		}
		if (y != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}	
	_putchar('\n');
	
}
