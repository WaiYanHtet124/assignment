#include<stdio.h>
void Change(int arr[100],int n);
void main()
{
  int n,arr[100],i;
  printf("Enter the numbers of elements in the array:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     printf("Enter the value of element %d=",i);
     scanf("%d",&arr[i]);
  }
  Change(arr,n);
  printf("The new array is ");
  for(i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
}
void Change(int arr[100],int n)
{
    int i,bpos=0,spos=0,temp;
    int max=arr[0];
    int min=arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            spos=i;
        }
    }
    printf("The smallest element is %d\n",min);
    printf("The position of smallest element in the array is %d\n",spos);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            bpos=i;
        }
    }
    printf("The largest element is %d\n",max);
    printf("The position of largest element in the array is %d\n",bpos);
    temp=arr[bpos];
    arr[bpos]=arr[spos];
    arr[spos]=temp;

}
