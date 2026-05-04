#include<stdio.h>
#include<conio.h>
void main()
{
    int n,arr[100],pos,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position from which the number has to be deleted:");
    scanf("%d",&pos);
    if(pos>=n+1) {printf("Impossible to delete!");}
    else
        {
    for(i=pos;i<n;i++)
    {
       arr[i]=arr[i+1];
    }

    for(i=0;i<n-1;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
        }
}
