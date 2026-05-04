#include<stdio.h>
void main()
{
    int i,j,arr[5][3],sum_item,sum;
    printf("Enter Data\n");
    printf("**********************\n");
    for(i=0;i<5;i++)
    {
       printf("Enter the sales of 3 items sold by salesman %d:",i+1);

        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        sum=0;
        printf("Total sales by salesman %d=",i+1);
        for(j=0;j<3;j++)
        {
            sum+=arr[i][j];

        }
        printf("%d\n",sum);
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        sum_item=0;
        printf("Total sales of item %d=",i+1);
        for(j=0;j<5;j++)
        {
            sum_item+=arr[j][i];
        }
        printf("%d\n",sum_item);
    }

}
