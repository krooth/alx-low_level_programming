#include "main.h"


/**
		* _isupper - return 1 if c is uppercase letter
		* @c: - integer parameter
		*
		* Return: returns 0 when program finishes excution
		*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
