#include "main.h"
/**
 * print_to_98 - prints the numbers to 98
 */
void print_to_98(int n)
{
	int i;
	int z;
	int x;

	x = 98;
	if (n > 98)
		i = -1;
	else
		i = 1;
	x = x * i;
	n = n * i;
	for (z = n ; z <= x ; z++)
	{
		int y;
	
		if (x < 0)
			y = z * i;
		else
			y = z;
			
		if (y >= 10 || y <= -10)
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
