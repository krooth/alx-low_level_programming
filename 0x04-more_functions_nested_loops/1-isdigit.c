#include "main.h"


/**
	* _isdigit - return 1 if c is a number
	* @c: - integer parameter
	*
	* Return: returns 0 when program finishes excution
	*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
