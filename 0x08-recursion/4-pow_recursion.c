#include "main.h"

/**
	* _pow_recursion - returns the power of a number
	* @x: number we are powering on
	* @y: power
	*
	* Return: returns integer
	*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return(-1);
	}
	if (y != 0)
		return(x * _pow_recursion(x, y - 1));
	else
	{
		return(1);
	}
}