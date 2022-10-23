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
	char i;

	for (i = 122; i > 96; --i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
