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
		
		print_num(y);

		if (y != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

}

void print_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	if (n / 10)
		print_num(n/10);
	_putchar(n%10 + '0');

}
