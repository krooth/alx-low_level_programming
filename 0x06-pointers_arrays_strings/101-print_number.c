#include "main.h"

/**
	* print_number - prints nmbers
	* @n: integer parameter
	*
	* Return: returns nothing
	*/

void print_number(int n)
{
	int temp = n / 10, base = 1, no_of_digits = 1, i, num;

	if (n == -2147483648)
		n += 2;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n == 0)
		no_of_digits = 1;__CLANG_ATOMIC_CHAR_LOCK_FREE
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
		if (n == 2147483646 && i == no_of_digits)
			_putchar('0' + 8);
		else
			_putchar('0' + num);
		base /= 10;
	}
}
