#include "main.h"


/**
	* print_diagonal - prints line
	* @n: integer parameter
	*
	* Return: returns 0 when program finishes excution
	*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar(92);
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
		}
	}
	_putchar('\n');
}
