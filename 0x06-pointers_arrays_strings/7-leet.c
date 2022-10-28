#include "main.h"

/**
	* *leet - leet encryption
	* @str: char parameter
	*
	* Return: returns character with leet encryption
	*/

char *leet(char *str)
{
	char small_letters[] = {'a', 'e', 'o', 't', 'l'};
	char cap_letters[] = {'A', 'E', 'O', 'T', 'L'};
	char leet[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == small_letters[j] || str[i] == cap_letters[j])
			{
				str[i] = leet[j];
			}
		}
	}
	return (str);
}
