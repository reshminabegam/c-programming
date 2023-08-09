#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int n;
    n=strlen(str);
    per(str,0,n-1);
}
void per(char*str,int l,int r)
{
    if(l==r)
    {
        printf("%s\xA",str);
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap((str+l),(str+i));
            per(str,l+1,r);
            swap((str+l),(str+i));
        }
    }
}
void swap(char*a,char*b)
{

    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
