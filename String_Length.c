#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    scanf("%[^
]s",s1);
    int len=strlen(s1);
    printf("%d",len);
}