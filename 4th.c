#include<stdio.h>
int main()
{
    int ld,a,sum=0;
    printf("enter");
    scanf("%d", &a);
    for(;a>0;a=a/10)
{
    ld=a%10;
    sum=sum+ld;
}printf("%d", sum);}
