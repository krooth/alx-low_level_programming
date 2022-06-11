#include "main.h"

/**
	* more_numbers - print number 0 to 9, 10 times
	* void: no parameters
	*
	* Return: returns 0 when program finishes excution
	*/


void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			if (j > 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}

