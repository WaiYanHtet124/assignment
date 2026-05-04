#include<stdio.h>
int sum(int num);
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int add=sum(num);
    printf("The sum of digits : %d",add);

}
int sum(int num)
{
    static int add=0;
    int remainder;
    if(num>0)
    {
        remainder=num%10;
        add+=remainder;
        sum(num/10);
    }
    return add;
}
