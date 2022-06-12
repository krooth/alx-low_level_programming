#include "main.h"

/**
	* print_square - prints line
	* @size: integer parameter
	*
	* Return: returns 0 when program finishes excution
	*/

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
