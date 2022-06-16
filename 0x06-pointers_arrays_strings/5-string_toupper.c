#include "main.h"

/**
	* reverse_array - concatnates strings
	* @a: int parameter
	* @n: int parameter
	*
	* Return: returns nothing
	*/

char *string_toupper(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}