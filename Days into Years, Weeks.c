#include<stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    int year = d/365;
    int rd = d-(year*365);
    int week = rd/7;
    printf("%d\n%d",year,week);
    }