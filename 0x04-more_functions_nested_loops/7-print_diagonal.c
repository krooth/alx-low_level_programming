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
		for (j = 0; j < i + 1; j++)
		{
			if (j == i)
			{
				_putchar(92);
				_putchar('\n');
			}
			else
				_putchar(' ');
		}
	}
	if (n <= 0)
		_putchar('\n');
}