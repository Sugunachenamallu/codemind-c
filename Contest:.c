#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d%d%d%d",&x,&y,&z,&a);
    a=(1*y)+(2*z);
    if(a>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
    
}