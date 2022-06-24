#include "main.h"

/**
	* factorial - returns factorial of a given number
	* @n: number we're searching factorial for
	*
	* Return: returns integer
	*/

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

