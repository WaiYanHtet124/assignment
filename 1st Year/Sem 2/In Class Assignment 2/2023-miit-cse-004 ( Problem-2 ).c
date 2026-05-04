#include<stdio.h>
void read_array(int my_array[], int n);
void display_array(int my_array[], int n);
void interchange(int my_array[10], int n);
int find_biggest_pos(int my_array[10], int n);
int find_smallest_pos(int my_array[10], int n);
void main()
{
   int n;
   printf("Enter the size of the array:");
   scanf("%d",&n);
   int my_array[10];
  read_array(my_array,n);
  find_biggest_pos(my_array,n);
  find_smallest_pos(my_array,n);
  interchange(my_array,n);
  display_array(my_array,n);

}
void read_array(int my_array[], int n)
{
   int i;

   for(i=0;i<n;i++)
   {
       printf("arr[%d]=",i);
       scanf("%d",&my_array[i]);
   }
}

int find_biggest_pos(int my_array[10], int n)
{
    int i,bpos=0,big;
    big=my_array[0];
    for(i=0;i<n;i++)
    {
        if(my_array[i]>big)
        {
            big=my_array[i];
            bpos=i;
        }
    }
    return bpos;
}
int find_smallest_pos(int my_array[10], int n)
{
    int i,spos=0,small;
    small=my_array[0];
    for(i=0;i<n;i++)
    {
        if(my_array[i]<small)
        {
            small=my_array[i];
            spos=i;
        }
    }
    return spos;
}
void interchange(int my_array[10], int n)
{

    int temp,Bpos,Spos;
    Bpos=find_biggest_pos(my_array,n);
    Spos=find_smallest_pos(my_array,n);
    temp=my_array[Bpos];
    my_array[Bpos]=my_array[Spos];
    my_array[Spos]=temp;

}
void display_array(int my_array[], int n)
{
  int i;
  printf("The new array is \n");
  for(i=0;i<n;i++)
  {
     printf("arr[%d]=%d\n",i,my_array[i]);

  }
}
