#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14.
 */
int main(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 15; j++)
        {
            if (j >= 10)  _putchar('1');

            _putchar('0' + j % 10);
        }
        _putchar('\n');
    }

    return (0);
}
