#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 * @n: The number.
 * 
 * Return: The absolute value of n
 */
int _abs(int n)
{
    if(n < 0) {
        return (-n);
    } else {
        return (n);
    }
}

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 * 
 * Returns: the value of the last digit
 */
int print_last_digit(int n) {
    int last_digit;

    last_digit = _abs(n % 10);

    _putchar(last_digit + '0'); // Convert the digit to character and print it

    return last_digit;
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}