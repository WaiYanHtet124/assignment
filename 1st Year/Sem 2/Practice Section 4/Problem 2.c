#include<stdio.h>
#include<conio.h>
int isSymetric(int a[20][20],int r,int c,int n);
void main()
{
  int r,c,n,flag;
  int a[20][20],i,j;
  printf("Enter no. of rows:");
  scanf("%d",&r);
  printf("Enter no. of columns:");
  scanf("%d",&c);
  printf("Enter the values of the matrix::\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("Enter a[%d][%d] value is:",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   if(r==c)
    {
    flag=isSymetric(a,r,c,n);

   if(flag==1)
   {
       printf("The given matrix is Symmetric matrix::\n");
       for(i=0;i<r;i++)
       {
           printf("\t");
           for(j=0;j<c;j++)
           {
               printf("%d  ",a[i][j]);
           }
           printf("\n");
       }
   }
   else
   {
       printf("The given matrix is not symmetric::\n");
       for(i=0;i<r;i++)
       {
           printf("\t");
           for(j=0;j<c;j++)
           {
               printf("%d  ",a[i][j]);
           }
           printf("\n");
       }
   }
    }
    else
    {
        printf("The matrix is \n");
        for(i=0;i<r;i++)
        {
            printf("\t");
            for(j=0;j<c;j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }
        printf("Sorry! Symmetric matrix are only square matrix.");

    }


}
int isSymetric(int a[20][20],int r,int c,int n)
{
    int i,j,flag=0;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            if(a[i][j]==a[j][i]) {flag=1;break;}
            else {flag=0;break;}
        }

    }
    if(flag==1) return 1;
    else return 0;
}
