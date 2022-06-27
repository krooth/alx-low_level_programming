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
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"',
	'(', ')', '{', '}'};

	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122 && str[i + 1] != '\0')
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
