#include <stdio.h>
#include "holberton.h"

/**
 * print_remaining_days - Prints the remaining days in a year
 * @month: The month (1-12)
 * @day: The day (1-31)
 * @year: The year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 && !(year % 100 == 0)) || (year % 400 == 0))
    {
        if (month > 2 || (month == 2 && day == 29))
        {
            printf("Day of the year: %d\n", 366 - convert_day(month, day));
            return;
        }
    }
    printf("Day of the year: %d\n", 365 - convert_day(month, day));
}

