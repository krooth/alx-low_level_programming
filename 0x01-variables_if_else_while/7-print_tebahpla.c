#include <stdio.h>


/**
   * main - entry point
   * void - no parameter for main
   *
   * Return: returns 0 when program finishes excution
   */

int main(void)
{
	char i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
