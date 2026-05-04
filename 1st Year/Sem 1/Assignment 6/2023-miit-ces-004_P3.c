#include<stdio.h>
void main()
{
    int num=1,i,count;

    for(i%2==0;i<-100;i++){
        if( (i%2==0) && (i%3==1))
            count++;
    }
    printf("The numbers between 1 & 100 that are divisible with 2 but not with 3 are %d",count);
}
