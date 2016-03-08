#define _CRT_SECURE_NO_WARNINGS 
#include "stdio.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	int dd,mm,yy,hh,mimi;
	int days_m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int day_years,sec_days, days=0, i;
	time_t sec = time(NULL);
	struct tm* timeinf;
	timeinf = localtime(&sec);
	printf("Enter your birthday in format dd.mm.yyyy\n");
	scanf("%d.%d.%d.%d%s%d:%d",&dd,&mm,&yy,&hh,&mimi);
	if(dd>31||dd>days_m[mm-1]||mm>12||yy>timeinf->tm_year+1900||yy<1918){
		printf("Wrong data");
		return 0;
	}
	printf("Enter time in format hh:mm\n");
	scanf("%d:%d",&hh,&mimi);
	if(hh>23||mimi> 59){
		printf("Wrong data");
		return 0;
	}
	day_years =(1900+timeinf->tm_year-yy)*365;
	for(i=yy-1900;i<timeinf->tm_year; i++){
		if(i%4!=0) continue;
		if(mm>2 && (i==yy-1900)) continue;
		day_years++;
	}
	i=0;
	for(i; i<mm-1;i++){
		days+=days_m[i];
	}
	if(timeinf->tm_year%4 ==0 && mm > 2) days++;
	sec_days = (day_years+timeinf->tm_yday - days - dd)*24*3600+(timeinf->tm_hour - hh)*3600 + (timeinf->tm_min - mimi)*60;
	printf("Your age in seconds %d\n", sec_days);
	return 0;
}