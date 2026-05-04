#include<stdio.h>
#include<conio.h>
int PrimeChecker(int num);
void read_array(int arr[],int n);
void display_array(int arr[],int n);
void sortPrimeOrNot(int arr[],int n);
void sortAscending(int arr[],int n);
void sortDescending(int arr[],int n);
void main()
{
    int n,i,count;
    printf("Enter a positive integer in the range[1,50]\n");
    scanf("%d",&n);
    int arr[n],num[n],prime[n];
    if(n<1 || n>50){
        printf("Enter a positive integer between 1 and 50!:");
    }
    else{
    read_array(arr,n);
    printf("Original array ");
    display_array(arr,n);
    printf("\n");
    sortPrimeOrNot(arr,n);
    }
}
void read_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
     printf("Enter integer %d of %d\n",i+1,n);
     scanf("%d",&arr[i]);
    }

}
void display_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
int PrimeChecker(int num)
{
    int i;
    if(num==1) return 0;
    else{
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0) return 0;
    }
    return 1;
    }
}
void sortPrimeOrNot(int arr[],int n)
{
   int prime[n],num[n],i;
   int count=0,rest=0,P=0,N=0;
   for(i=0;i<n;i++)
   {
       if(PrimeChecker(arr[i]))
       {
           prime[count++]=arr[i];
       }
       else num[rest++]=arr[i];
   }
   sortAscending(prime,count);
   sortDescending(num,rest);
   printf("Modified array :");
   for(i=0;i<n;i++)
   {
    if(i%3<2 && P<count)
   {
      arr[i]=prime[P++];
      printf("%d ",arr[i]);
   }
   else
   {
       arr[i]=num[N++];
       printf("%d ",arr[i]);
   }
   }


}
void sortAscending(int arr[],int n)
{
    int i,j,temp;

    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
void sortDescending(int arr[],int n)
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
