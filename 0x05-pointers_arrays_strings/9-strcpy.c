#include "main.h"

/**
	* *_strcpy - copies arrays
	* @dest: char
	* @src: char
	*
	* Return: returns nothing
	*/

char *_strcpy(char *dest, char *src)
{
	int i, counter = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = 0; i < counter + 1; i++)
	{
		dest[i] = src[i];
	}
}
