#include "main.h"

/**
	* puts_half - prints the second half of a string
	* @str: character parameter
	*
	* Return: returns nothing
	*/

void puts_half(char *str)
{
	int i, j, n, counter = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	if (counter % 2 == 0)
	{
		n = counter / 2;
	}
	else
	{
		n = (counter - 1) / 2;
	}

	for (j = counter; j >= n; j--)
	{
		_putchar(str[i]);
	}
}
