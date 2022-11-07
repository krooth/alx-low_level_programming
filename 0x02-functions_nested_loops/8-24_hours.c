#include "main.h"

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
				for (l = 0; i < 10; i++)
				{
					if (i == 2 && j == 3 && k == 5 && l == 9)
					{
						break;
					}		
				}
				
			}
		}
	}
}
