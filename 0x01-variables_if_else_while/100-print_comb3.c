#include <stdio.h>

/**
   * main - entry point
   * void - no parameter for main
   *
   * Return: returns 0 when program finishes excution
   */

int main(void)
{
    int a = 0, b = 0;
    while (a < 10) 
    {
        while (b < 10)
        {
            if (a != b && a < b)
            {
                putchar('0' + a);
                putchar('0' + b);
                if (a != 8 || b != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            b++;
        }
        b = 0;
        a++;
    }
    putchar('\n');
    return (0);
}