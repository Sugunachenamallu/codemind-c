#include<stdio.h>
int main()
{
    int a,b,h;
    float s;
    scanf("%d%d%d",&a,&b,&h);
    s=1/2.0*(a+b)*h;
    printf("%.4f",s);
}