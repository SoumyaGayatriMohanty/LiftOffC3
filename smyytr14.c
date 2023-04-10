#include<stdio.h>
void main()
{
    int num,i,fac,*p1,*p2;
    p1=&num;
    p2=&fac;
    printf("enter any number");
    scanf("%d",p1);
    fac=1;
    for(i=1;i<=*p1;i++)
    {
        *p2=*p2*i;
    }
    printf("factorial of the number is = %d",*p2);
}