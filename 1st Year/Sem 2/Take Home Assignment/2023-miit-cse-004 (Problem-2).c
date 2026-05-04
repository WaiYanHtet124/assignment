#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,pos1=0,pos2=0,arr[100];
    int flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                pos1=i;
                pos2=j;
                flag=1;
                break;
            }
        }
    }
       if(flag==1){
        printf("Duplicate number found at location %d and %d",pos1,pos2);
       }
    else printf("No Duplicate numbers!");
}
