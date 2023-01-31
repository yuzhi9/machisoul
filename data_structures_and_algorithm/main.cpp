#include <iostream>
#include <stdint.h>
using namespace std;
typedef struct
{
    int  year;
    int  mon;
    int  day;
    int  hour;
    int  min;
    int  sec;
} UTCtime ;

void Unix2UTC(uint64_t unix_sec, UTCtime* utcTime);
uint64_t UTC2Unix(UTCtime* utcTime);
int main() {
    UTCtime utcTime, utc8Time;
    uint64_t tdata= 92535244799;
    Unix2UTC(tdata, &utcTime);
    printf("Unix timeStamp: %lld\n",tdata);
    printf("UTC time: %4d-%02d-%02d %02d:%02d:%02d\n",
           utcTime.year, utcTime.mon, utcTime.day, utcTime.hour, utcTime.min, utcTime.sec);

    Unix2UTC(tdata+8*60*60, &utc8Time);
    printf("BeiJing UTC time: %4d-%02d-%02d %02d:%02d:%02d\n",
           utc8Time.year, utc8Time.mon, utc8Time.day, utc8Time.hour, utc8Time.min, utc8Time.sec);

    printf("after Unix timeStamp is: %lld", UTC2Unix(&utcTime));
}

void Unix2UTC(uint64_t unix_sec, UTCtime* utcTime)
{
    int year=1970, mon=0, day=0, tday=0;
    day = unix_sec/(24*60*60);
    while(day >= 365)
    {
        if((year%400==0)||((year%4==0)&&(year%100!=0)))	{day-=366;}
        else											{day-=365;}
        year++;
    }
    for(mon=1;mon<13;mon++)
    {
        tday = day;
        switch(mon)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:day-=31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:day-=30;
                break;
            case 2:if((year%400==0)||((year%4==0)&&(year%100!=0)))	{ day-=29;}
                else												{ day-=28;}
                break;
        }
        if(day < 0)
        {
            day = tday;
            break;
        }
    }
    utcTime->year = year;
    utcTime->mon  = mon;
    utcTime->day  = day+1;
    utcTime->hour = unix_sec%(24*60*60)/(60*60);
    utcTime->min  = unix_sec%(24*60*60)%(60*60)/60;
    utcTime->sec  = unix_sec%(24*60*60)%(60*60)%60;
}


uint64_t UTC2Unix(UTCtime* utcTime)
{
    uint64_t year = utcTime->year;
    uint64_t mon = utcTime->mon;
    uint64_t day = utcTime->day;
    uint64_t hour = utcTime->hour;
    uint64_t min = utcTime->min;
    uint64_t sec = utcTime->sec;

    uint64_t unix_sec = 0;
    int i =0;
    int tyear = year;
    while(tyear > 1970)
    {
        tyear--;
        if((tyear%400==0)||((tyear%4==0)&&(tyear%100!=0)))	{day+=366;}
        else												{day+=365;}
    }
    for(i=1;i<13;i++)
    {
        if(mon == i)	break;
        switch(i)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:day+=31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:day+=30;
                break;
            case 2:if((year%400==0)||((year%4==0)&&(year%100!=0)))	{ day+=29;}
                else												{ day+=28;}
                break;
        }
    }
    unix_sec += (day-1)*24*60*60;
    unix_sec += hour*60*60;
    unix_sec += min*60;
    unix_sec += sec;
    return unix_sec;
}
