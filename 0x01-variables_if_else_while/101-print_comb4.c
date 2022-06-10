#include <stdio.h>

/**
   * main - entry point
   * void - no parameter for main
   *
   * Return: returns 0 when program finishes excution
   */


int main(void)
{
	int a = 0, b = 0, c = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{

				if (a != b && b != c && a < b && b < c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}

				}
				c++;
			}
			b++;
			c = 0;
		}
		b = 0;
		a++;
	}
	putchar('\n');
	return (0);

}
