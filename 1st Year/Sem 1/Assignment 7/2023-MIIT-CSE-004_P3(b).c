#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=3;j++)
        {
            if (j==2 || i==1 || i==5)
            {
                printf("*");
                printf(" ");
            }
            else printf("  ");
        }
        printf(" \n");
    }
}
