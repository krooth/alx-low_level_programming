#include "main.h"

/**
	* print_numbers - returns the product of two ints
	* void: non void
	*
	* Return: returns 0 when program finishes excution
	*/

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
