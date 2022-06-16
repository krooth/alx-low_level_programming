#include "main.h"

/**
	* *_strcmp - concatnates strings
	* @s1: char parameter
	* @s2: char parameter
	*
	* Return: returns pointer
	*/

int _strcmp(char *s1, char *s2)
{
	int result = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			result = 0;
		}
		else
		{
			result = s1[i] - s2[i];
			break;
		}
	}
	return (result);
}
