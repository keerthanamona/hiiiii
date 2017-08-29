#include<stdio.h>
void main()
{
int year;
printf("enter the year");
scanf(%d",&year);
if((year%400)==0)
printf("the year is leaper");
else if((year%100)==0)
printf("the year is not leaper");
else if((year%4)==0)
printf("the year is leaper");
else
printf("the year is not leaper");
}
