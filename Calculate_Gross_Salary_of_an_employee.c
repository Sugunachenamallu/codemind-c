#include<stdio.h>
int main()
{
    float bs,hr,da,pf,a;
    scanf("%f%f%f",&bs,&hr,&da);
    pf=bs*12/100.0;
    a=bs+hr+da+pf;
    printf("%.2f
%.2f",pf,a);
}