#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * void: no parameter
 *
 * Return: does not return
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 2 && j > 3)
				break;
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					printf("%d%d:%d%d\n", i, j, k, l);
				}
			}
		}
	}
}
