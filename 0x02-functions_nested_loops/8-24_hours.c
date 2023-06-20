#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 */
void jack_bauer(void) {
    int hour, minute;

    for (hour = 0; hour < 24; hour++) {
        for (minute = 0; minute < 60; minute++) {
            printf("%.2d:%.2d\n", hour, minute);
        }
    }
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}