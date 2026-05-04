#include<stdio.h>
void read_array(int arr[],int n);
int find_small(int arr[],int n);
void main()
{
   int i,n,small;
   printf("Enter the size of the array:");
   scanf("%d",&n);
   int arr[n];
  read_array(arr,n);
  int pos=  find_small(arr,n);
  printf("The smallest number in the array is=%d",arr[pos]);

}
void read_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}
int find_small(int arr[],int n)
{
    int i,small,pos=0;
    small=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            pos=i;
        }
    }
    return pos;
}
