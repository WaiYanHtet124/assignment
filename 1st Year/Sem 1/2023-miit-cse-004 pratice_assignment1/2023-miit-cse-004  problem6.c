#include<stdio.h>
void main()
{
const float cm=2.54;
int feet,inches;
float height;
printf("Enter your height(feet)\n");
scanf("%d",&feet);
printf("Enter your height(inches)\n");
scanf("%d",&inches);
height=((feet*12)+inches)*cm;
printf("Your height in cm is=%f", height);
}

