#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
  * main - entry point
  * void - doesn't take any parameter
  *
  * Return: returns 0 when the program finished excuting
  */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (i == j)
			{
				continue;
			}
			if (i == 9)
			{
				break;
			}
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
