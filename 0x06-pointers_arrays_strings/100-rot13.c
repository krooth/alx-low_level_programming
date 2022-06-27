#include "main.h"

/**
	* *rot13 - rotate a character by 13 for alphabets
	* @str: char parameter
	*
	* Return: returns character which is rotated by 13
	*/

char *rot13(char *str)
{
	char check[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == check[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
