#include<stdio.h>
void main()
{
    int first,second,*p,*q,sum;
    printf("enter two integers to add\n");
    scanf("%d%d",&first,&second);
    p=&first;
    q=&second;
    sum=*p+*q;
    printf("sum of the numbers=%d\n",sum);
}