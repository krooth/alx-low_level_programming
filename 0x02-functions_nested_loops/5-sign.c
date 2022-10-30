#include "main.h"

/**
 * print_sign - checks if input is +ive number, -ve number or 0
 * @c: int parameter
 *
 * Return: 1 if +ve, 0 if zero and -1 if -ve.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
