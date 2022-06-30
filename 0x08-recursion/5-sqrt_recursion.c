#include "main.h"

/**
	* _sqrt - finds the square root of a number
	* @n: number we're looking to find sqare root for
	* @tmp: number to return the square root of the input
	*
	* Return: returns integer
	*/


int _sqrt(int n, int tmp)
{
	if ((tmp * tmp) == n)
		return (tmp);
	if ((tmp * tmp) > n)
		return (-1);
	return (_sqrt(n, tmp + 1));
}

/**
	* _sqrt_recursion - finds the square root of a number
	* @n: number we're looking to find sqare root for
	*
	* Return: returns integer
	*/

int _sqrt_recursion(int n)
{
	int tmp = 1;

	return (_sqrt(n, tmp));
}
