#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,arr[100],evencount=0,oddcount=0;

    printf("Enter the numbers of elements in array:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
            printf("Enter element %d:",i+1);
            scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
            if(arr[i]%2==0)
            evencount++;
    else oddcount++;
    }
    printf("The elements of array list:");

    for(i=0;i<n;i++){
            printf("%d ",arr[i]);
    }

    printf("\nTotal numbers of even elements in an array list=%d\n",evencount);

    printf("Total numbers of odd elements in an array list =%d",oddcount);

}
