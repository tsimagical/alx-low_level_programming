#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last);
	if (last == 0) 
		printf("Last digit of %d is 0 and is 0", n);
	if ( last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);

	printf("\n");

	return (0);
}