#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @n: int parameter
 *
 * Return: the integer
 */
int print_last_digit(int n)
{
	int last_num = n % 10;

	_putchar('0' + last_num);
	return (last_num);
}
