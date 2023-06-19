#include <stdio.h>

/**
* main-print the lowercase  alphabet in reverse,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void) 
{
  int i;

  for (i = 0; i < 10; i++)
  {
    putchar(i + '0');

    if (i != 9)
    {
      putchar(',');
      putchar(' ');
    }
  }

  putchar('\n');

  return 0;
}