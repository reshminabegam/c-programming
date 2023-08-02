#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
int choice=1,ele;
struct node*newnode,*start=0,*end=0;
void create()
{
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the element:");
        scanf("%d",&ele);
        newnode->data=ele;
        newnode->prev=0;
        newnode->next=0;
        if(start==0)
        {
            start=newnode;
            end=newnode;
        }
        else
        {
            start->next=newnode;
            newnode->prev=end;
            end=newnode;
        }
        printf("do you want to continue?");
        scanf("%d",&choice);
    }
}
    void display()
    {
        struct node*temp=start;
        while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
    int main()
        {
            create();
            display();
        }

