#include <stdio.h>

/**
* main-print the lowercase  alphabet in reverse,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void) 
{
  int i, j;

  for (i = 0; i < 100; i++)
  {
    for (j = i; j < 100; j++)
    {
      int num1 = i / 10;
      int num2 = i % 10;
      int num3 = j / 10;
      int num4 = j % 10;

      putchar(num1 + '0');
      putchar(num2 + '0');
      putchar(' ');
      putchar(num3 + '0');
      putchar(num4 + '0');

      if (i != 99 || j != 99)
      {
        putchar(',');
        putchar(' ');
      }
    }
  }

  putchar('\n');

  return 0;
}