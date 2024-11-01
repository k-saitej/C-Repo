#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,g;
    scanf("%d %d %d",&x,&y,&m);
     g = (pow(x,y));
    int h=g%m;
    printf("%d",h);
}