#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    int l,i,j,c,l1;
    printf("enter the string");
    gets(str);
    l=strlen(str);
    for(i=l;i>=0;i--)
    {
        if(str[i]==' ' && str[i-1]!=' ')
        {
           c=i+1;

           for(j=c;j<l;j++)
           {
                printf("%c",str[j]);
           }
           str[i]=' ';
           //str[i]=' ';
           //printf("%c",str[i]);
           //str[i-1]=' ';
           str[i]='\0';
           l1=strlen(str);
           l=l1;

        }
    }
}
    /*for(i=0;i<=l;i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
           c=i;
           for(j=c;j>=0;j--)
           {
                printf("%c",str[j]);
           }
        }
    }*/
