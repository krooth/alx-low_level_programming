#include "main.h"

/**
	* print_fizz_buzz - prints fizz or buzz for multiples of 3 and 4
	* void: no parameter
	*
	* Return: void returning function(none)
	*/

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
