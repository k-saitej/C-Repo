#include<stdio.h>
int main()
{
    int radius;
    scanf("%d",&radius);
    float pi = 3.14;
    float area = pi*(radius*radius);
    float perimeter = 2*pi*radius;
    printf("%.2f\n%.2f",area,perimeter);
}