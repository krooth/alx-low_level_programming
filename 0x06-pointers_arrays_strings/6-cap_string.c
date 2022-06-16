#include "main.h"

/**
	* *cap_string - concatnates strings
	* @str: int parameter
	*
	* Return: returns nothing
	*/

char *cap_string(char *str)
{
	int i, j;
	char sep[] = ",;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != 0; j++)
		{
			if (str[i] == sep[j])
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str[i]);
}
