#include "main.h"

/**
	* print_last_digit - prints the last digit of a given number
	* @n: integer parameter to extract last digit from
	*
	* Return: returns the last digit of paramater
	*/

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
