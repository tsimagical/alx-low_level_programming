#include "main.h"
/**
* jack_bauer - print every miniute of the day
* Description: print jack beauer 
*/
void jack_bauer(void)
{
	int t, x;
	
	for (t = 0 ; t < 24 ; t++)
	{
		for (x = 0 ; x < 60 ; x++)
		{
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			_putchar(':');
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar('\n');
		}
	}
}
