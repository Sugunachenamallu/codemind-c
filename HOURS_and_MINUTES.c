#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    c=a/60;
    b=a%60;
    printf("%d Hour(s) \%d Minute(s)",c,b);
}
