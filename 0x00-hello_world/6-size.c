#include <stdio.h>
#include <string.h>

/**
  * main - entry point
  * void - doesn't take any parameter
  *
  * Return: returns 0 when the program finished excuting
  */

int main(void)
{
	char char_type;
	int int_type;
	long int long_int_type;
	float float_type;
	printf("%s%zu%s\n", "Size of char: ", sizeof(char_type), " byte(s)");
	printf("%s%zu%s\n", "Size of int: ", sizeof(int_type), " byte(s)");
	printf("%s%zu%s\n", "Size of long int: ", sizeof(long_int_type), " byte(s)");
	printf("%s%zu%s\n", "Size of float: ", sizeof(float_type), " byte(s)");
	return (0);
}

