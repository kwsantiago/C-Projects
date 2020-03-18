#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

 /* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day){
    int i, leap, reject = -1;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    if(year < 1900 || year > 2020)
        return reject;
    else if(month < 1 || month > 12)
        return reject;
    else if(day < 1 || day > 31)
        return reject;
    for (i = 1; i < month; i++)
        day += daytab[leap][i];
    return day;
}
 /* month_day: set month, day from day of year */
int month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab[leap][i];
    *pmonth = i;
    *pday = yearday;
}


int main(){
    int year, month, day, yearday;
    for(year = 1900; year <= 2020; ++year){
        for(yearday = 1; yearday <= 365; ++year){
            if(month_day(year, yearday, &month, &day) == -1)
                printf("Invalid day of the month.\n");
            else if(day_of_year(year, month, day) != yearday){
                printf("Bad result: %d %d\n", year, yearday);
                printf("Month: %d \nDay: %d\n", month, day);
            }
        }
    }
    return 0;
}
