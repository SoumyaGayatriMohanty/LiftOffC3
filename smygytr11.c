#include<stdio.h>
#include<string.h>
void removechar(char*str,char chartoremove){
    int i,j;
    int len=strlength(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==chartoremove)
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j=1];
            }
            len--;
            i--;
        }
    }
    void main(){
        char str[100],ch,c;
        int i,j,len;
        printf("enter the string:\n");
        scanf("%[^n]%c",str,&c);
        printf("enter the character you want to remove:\n");
        scanf("%c",&ch);
        removechar(str,ch)
        printf("string after removing '%c':'%s'",ch,str);
    }
}