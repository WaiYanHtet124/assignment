#include<stdio.h>
void main()
{
float x1,x2,y1,y2,diff1,diff2;

printf("Enter X1,Y1\n");
scanf("%f",&x1);
scanf("%f",&y1);
printf("Enter X2,Y2\n");
scanf("%f",&x2);
scanf("%f",&y2);
diff1=x1-x2;
diff2=y1-y2;

printf("Difference=(%.1f,%.1f)",diff1,diff2);
}

