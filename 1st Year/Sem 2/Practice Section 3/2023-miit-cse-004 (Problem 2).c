#include<stdio.h>
#include<conio.h>
void main()
{
    int n,arr[10][3],i,j;
    float sum,average,total=0,Class_avg=1;

    printf("Enter Data\n");
    printf("**************\n");
    for(i=0;i<10;i++)
    {
       printf("Enter the marks of student %d in 3 subjects:",i+1);
       for(j=0;j<3;j++)
        {
          scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("STUD NO.  MARKS IN 3 SUBJECTS\tTOTAL MARKS\tAVERAGE\n");


    for(i=0;i<10;i++)
    {
        sum=0;
        average=1;
        printf(" %d\t ",i);
        for(j=0;j<3;j++)
        {
          printf("  %d ",arr[i][j]);
          sum+=arr[i][j];
          average=sum/3;
        }
        printf("\t  %.0f\t\t %.2f",sum,average);
        printf("\n");
        total+=sum;
      }
      printf("\n");
      Class_avg=total/10;
      printf("CLASS AVERAGE = %.2f",Class_avg);


}
