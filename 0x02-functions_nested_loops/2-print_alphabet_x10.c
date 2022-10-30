#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
  * print_alphabet_x10 - entry point
  * void - doesn't take any parameter
  *
  * Return: does not return anything
  */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);

		}
		_putchar('\n');
	}

}

