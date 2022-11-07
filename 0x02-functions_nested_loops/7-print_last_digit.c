#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @n: int parameter
 *
 * Return: the integer
 */
int print_last_digit(long int n)
{
	int last_num;

	if (n < 0)
		n *= -1;
	last_num = n % 10;
	_putchar('0' + last_num);
	return (last_num);
}
