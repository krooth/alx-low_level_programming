#include "main.h"

/**
	* print_sign - checks if character is alphabetic
	* @n: integer parameter for print_sign()
	*
	* Return: returns 1 if character is alphabetic and 0 if not
	*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
