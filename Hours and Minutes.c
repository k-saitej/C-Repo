#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int hour = m/60;
    int min = m-(60*hour);
    printf("%d Hour(s) %d Minute(s)",hour,min);
}