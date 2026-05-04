#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float root1,root2,d;

    printf("Enter coefficient a\n");
    scanf("%d",&a);

    printf("Enter coefficient b\n");
    scanf("%d",&b);

    printf("Enter coefficient c\n");
    scanf("%d",&c);

    if(a==0)printf("\nThis equation is not quadratic");
    d=b*b-4*a*c;

    if (d>0){
            root1=(-b+sqrt(d))/(2*a);
            root2=(-b-sqrt(d))/(2*a);
            printf("\nRoots of the equations are %.2f and %.2f",root1,root2);
    }

    else if (d==0){
            root1=root2=-b/(2*a);printf("Roots of the equations are equal");
            printf("  Root is %f",root1);
    }

    else printf("The roots of the equations are imaginary");
}
