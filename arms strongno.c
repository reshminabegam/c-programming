#include<stdio.h>
int main()
{
    int n,c=0,rem,sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        n=n/10;
        ++c;
    }
    n=temp;
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,c);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("not a Armstrong number");
    }
    return 0;
}
