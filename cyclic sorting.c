#include<stdio.h>


    void cyclicSort(int a[],int n)
    {
        int i=0,correct;
        while(i<n)
        {
            correct=a[i]-1;
        }
        if(a[i]!=a[correct])
        {
            swap(a,correct);
        }
        else
        {
            i++;
        }
    }
    void swap(int a[],int first,int second)
    {
        int temp=a[first];
        a[first]=a[second];
        a[second]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

int main()
{
    int i,n;
    printf("enter ur size:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    cyclicSort(a,n);
}
