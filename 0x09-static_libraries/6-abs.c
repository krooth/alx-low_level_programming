#include "main.h"


/**
	* _abs - gives the absoulte value of a given number
	* @n: integer parameter to work on
	*
	* Return: returns the absolute value of a given number
	*/

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
