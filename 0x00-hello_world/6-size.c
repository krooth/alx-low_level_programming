#include <stdio.h>

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
	long long int long_long_int_type;
	float float_type;

	printf("%s%zu%s\n", "Size of a char: ", sizeof(char_type), " byte(s)");
	printf("%s%zu%s\n", "Size of an int: ", sizeof(int_type), " byte(s)");
	printf("%s%zu%s\n", "Size of a long int: ", sizeof(long_int_type),
                        " byte(s)");
	printf("%s%zu%s\n", "Size of a long long int: ", sizeof(long_long_int_type),
                        " byte(s)");
	printf("%s%zu%s\n", "Size of a float: ", sizeof(float_type), " byte(s)");
	return (0);
}
