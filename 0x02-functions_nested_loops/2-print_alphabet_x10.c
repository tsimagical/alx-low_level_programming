#include "main.h"

/**
 * print_alphabet_x10 - print all alphabet in small case 10 times
 *
 * Return: empty
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
		print_alphabet();
}

/**
* print_alphabet - print all alphabet in small case
*
* Return: empty
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
