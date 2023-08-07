#include<stdio.h>
void main()
{
    int array[30][30],tp[30][30];
    int row,col,i,j;
    printf("enter the rows&col of the matrix \n");
    scanf("%d%d",&row,&col);
    printf("enter the matrix \n");
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("given matrix is \n");
    for(i=0;i<row;++i)
    {
        for(j=0;j<col;++j)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
   for(i=0;i<row;++i)
   {
       for(j=0;j<col;++j)
       {
           tp[j][i]=array[i][j];
       }
   }
   printf("Transpose of the matrix \n");
   for(i=0;i<col;++i)
   {
       for(j=0;j<row;++j)
       {
           printf("%d",tp[i][j]);
       }
       printf("\n");
   }
}

