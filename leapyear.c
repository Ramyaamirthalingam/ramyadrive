#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf(" enter the year");
scanf("%d",&year);
if((year%4==0 && year%100==0)||year%400==0)
{
printf("the giver year is leap year");
}
else
{
printf("the giver year is not leap year");
}
}
