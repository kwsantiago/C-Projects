#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

 /* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day){
    int i, leap, reject = -1;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    char *p = &daytab[leap][1];
    for (i = 1; i < month; i++){
        day += *p++;
    }
    return day;
}
 /* month_day: set month, day from day of year */
int month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    char *p = &daytab[leap][1];
    for(i = 1; yearday > *p; i++)
        yearday -= *p++; 
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
