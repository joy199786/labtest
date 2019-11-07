#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct dateData
{
    int year, month, day;
};

void getdate( dateData * d );
int datecmp( dateData date1, dateData date2 );

int main()
{
    int i;
    int ans;
    dateData date1;
    dateData date2;
    for(i=0;i<5;i++)
        {
            printf("Input the first date (year/month/day): ");
            getdate( &date1);
            printf("Input the second date (year/month/day): ");
            getdate( &date2);

            ans = datecmp( date1, date2 );
            if(ans == -1)
            {
                printf("%d-%02d-%02d < %d-%02d-%02d\n",date1.year, date1.month, date1.day, date2.year, date2.month, date2.day);
            }
            if(ans == 1)
            {
                printf("%d-%02d-%02d > %d-%02d-%02d\n",date1.year, date1.month, date1.day, date2.year, date2.month, date2.day);
            }
            if(ans == 0)
            {
                printf("%d-%02d-%02d = %d-%02d-%02d\n",date1.year, date1.month, date1.day, date2.year, date2.month, date2.day);
            }
        printf("\n");
        }
    return 0;
}

void getdate( dateData * d )
{
    scanf("%d/%d/%d", &d->year,&d->month, &d->day );
}

int datecmp(dateData date1, dateData date2 )
{
    if( date1.year > date2.year)
    {
        return 1;
    }
    if( date1.year < date2.year)
    {
        return -1;
    }
    if( date1.year == date2.year)
    {
            if( date1.month > date2.month)
            {
                return 1;
            }
            if( date1.month < date2.month)
            {
                return -1;
            }
            if( date1.month == date2.month)
            {
                        if( date1.day > date2.day)
                        {
                            return 1;
                        }
                        if( date1.day < date2.day)
                        {
                            return -1;
                        }
                        if( date1.day == date2.day)
                        {
                            return 0;
                        }
            }
    }
}
