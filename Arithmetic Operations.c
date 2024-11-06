#include<stdio.h>
int main()
{
    int x,y,sum,difference,product,quotient,remainder;
    scanf("%d\n%d",&x,&y);
    sum = x+y;
    difference=x-y;
    product=x*y;
    quotient=x/y;
    remainder=x%y;
    printf("Sum:%d\nDifference:%d\nProduct:%d\nQuotient:%d\nRemainder:%d",sum,difference,product,quotient,remainder);
}