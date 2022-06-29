#include "main.h"

/**
	* *rot13 - rotate a character by 13 for alphabets
	* @str: char parameter
	*
	* Return: returns character which is rotated by 13
	*/

void print_number(int n)
{
	int temp = n / 10, base = 1, no_of_digits = 1, i, num;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n == 0)
		no_of_digits = 1;
	
	else
	{
		while (temp != 0)
		{
			no_of_digits++;
			temp /= 10;
		}
	}
	for (i = 1; i < no_of_digits; i++)
	{
		base *= 10;
	}
	temp = n;
	for (i = 1; i <= no_of_digits; i++)
	{
		num = (temp / base) % 10;
		_putchar('0' + num);
		base /= 10;
	}
}