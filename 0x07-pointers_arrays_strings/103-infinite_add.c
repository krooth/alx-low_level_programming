#include "main.h"

/**
	* _strstr - returns character on the first occurence
	* @haystack:  string to look a character for
	* @needle: character we're looking for
	*
	* Return: returns char
	*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, digit_n1, digit_n2, largest_size, smallest_size, sum,
    remainder = 0;
    char *largest_str, *smallest_str;

    for(i = 0; n1[i] != '\0'; i++)
    {
        digit_n1++;
    }
    for(i = 0; n2[i] != '\0'; i++)
    {
        digit_n2++;
    }
    if (digit_n1 >= digit_n2)
    {
        largest_size = digit_n1;
        largest_str = n1;
        smallest_size = digit_n2;
        smallest_str = n2;
    }
    else{
        largest_size = digit_n2;
        largest_str = n2;
        smallest_size = digit_n1;
        smallest_str = n1;
    }
    if (size_r < (largest_size + 2))
        return (0);
    for(i = largest_size - 1; i >= 0; i--)
    {
        for (j = smallest_size - 1; j >= 0; j--)
        {
            if (j >= 0)
                sum = (largest_str[i] - '0') + (smallest_str[j] - '0') + remainder;
            else
                sum = (largest_str[i] - '0') + remainder;
            if (sum > 10)
                remainder = sum / 10;
            else
                remainder = 0;
            r[i + 1] = sum + '0';
        }
    }
        return (r);
}