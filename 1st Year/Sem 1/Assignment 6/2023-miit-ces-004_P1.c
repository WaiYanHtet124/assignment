#include<stdio.h>
void main()
{
    int num = 1;

    printf("Odd numbers between 1 and 500:\n");

    while (num <= 500) {
        printf("%d  ", num);
        num += 2;
    }
}
