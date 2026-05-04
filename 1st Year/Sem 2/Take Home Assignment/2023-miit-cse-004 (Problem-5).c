#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n,index=0,temp,i,j,arr1[100],arr2[100],arr3[1000];
    int n3=0;
    printf("Enter the numbers of elements in array 1:");
    scanf("%d",&n1);
    printf("Enter the elements of the first array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the numbers of elements in array 2:");
    scanf("%d",&n2);
    printf("Enter the elements of the second array:");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<n1;i++)
    {
        arr3[index]=arr1[i];
        index++;
    }
    for(i=0;i<n2;i++)
    {
        arr3[index]=arr2[i];
        index++;
    }
    n3=n1+n2;
    for(i=0;i<n3;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(arr3[i]>arr3[j])
            {
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    printf("The contents of the merged arrays are\n");

    for(i=0;i<n3;i++)
    {
        printf("Arr[%d]=%d  ",i,arr3[i]);
    }

}
