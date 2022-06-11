#include "main.h"

/**
	* print_line - prints line
	* @n: integer parameter
	*
	* Return: returns 0 when program finishes excution
	*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
