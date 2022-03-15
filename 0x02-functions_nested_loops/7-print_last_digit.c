#include "main.h"

/**
 * print_last_digit - pritns the last digit of a number
 * @n: a number
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(n % 10);
	_putchar(last_digit + '0');
	return (last_digit);
}

/**
 * _abs - absolute value of a number
 * @n: a number
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
