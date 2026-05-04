#include<stdio.h>
int main()
{
    int i,j,n;

    for(i=101;i<=999;i++)
    {
        j=i/100;
        n=i%10;
        if (j==n) {printf(" %d  ",i);}


    }
    return 0;
}
