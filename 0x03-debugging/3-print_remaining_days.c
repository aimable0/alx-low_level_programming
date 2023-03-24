#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, days_left;

    days_left = 0;

    for (i = month - 1; i < 12; i++)
    {
        days_left += days_in_month[i];
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        if (month > 2)
        {
            days_left += 1;
        }

        if (day > 29)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
            return;
        }
    }
    else
    {
        if (day > days_in_month[month - 1])
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
            return;
        }
    }

    for (i = month - 1; i < 12; i++)
    {
        if (i == month - 1)
        {
            days_left -= (days_in_month[i] - day);
        }
        else
        {
            days_left -= days_in_month[i];
        }
    }

    printf("Day of the year: %d\n", convert_day(month, day));
    printf("Remaining days: %d\n", days_left);

    return;
}

