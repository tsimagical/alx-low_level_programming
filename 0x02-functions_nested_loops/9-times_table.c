#include "main.h"
/**
 * times_table - prints times table
 */
void times_table(void)
{
	int x, y;

	x = 0;

	while (x < 10)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			int z;

			z = x * y;

			if (z >= 10)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
			{
				_putchar(z + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y < 9 && z < 10)
			{
				_putchar(' ');
			}
		}
		x++;
		_putchar('\n');
	}
}
