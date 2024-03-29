#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table starting with 0.
 * void: no parameter
 *
 * Return: does not return
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
				printf("%d", i * j);
			else if (i * j < 10)
				printf("%d,  ", i * j);
			else
				printf("%d, ", i * j);
		}
		printf("\n");
	}
}
