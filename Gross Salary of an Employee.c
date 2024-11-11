#include<stdio.h>
int main()
{
    float sal,hra,da;
    scanf("%f\n",&sal);
    scanf("%f\n",&hra);
    scanf("%f",&da);
    float pf = (12/100.0)*(sal);
    float gross = sal+hra+da+pf;
    printf("%.2f\n%.2f",pf,gross);
}