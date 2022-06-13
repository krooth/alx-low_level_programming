#include "main.h"

/**
	* print_fizz_buzz - prints fizz or buzz for multiples of 3 and 4
	* void: no parameter
	*
	* Return: void returning function(none)
	*/

void print_fizz_buzz(void)
{
	int i, j, k;
	char fizz[5] = 'Fizz';
	char buzz[5] = 'Buzz';

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			for (j = 0; j < 6; j++)
			{
				_putchar(fizz[j]);
			}
		}
		else if (i % 5 == 0)
		{
			for (k = 0; k < 6; k++)
			{
				_putchar(buzz[k]);
			}
		}
		else
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
