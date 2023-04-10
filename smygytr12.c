#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],c,temp=1;
    int i,j,k=0,n;
    printf("enter the string:\n");
    gets(s);
    printf("enter character:\n");
    c=getchar();
    for(i=0;s[i];i++)
    {
        s[i]=s[i+k];
        if(s[i]==c){
            k++;
            i--;
        }
    }
    printf("%s",s);
}