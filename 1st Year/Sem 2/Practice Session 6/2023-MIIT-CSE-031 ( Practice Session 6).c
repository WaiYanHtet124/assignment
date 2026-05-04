#include<stdio.h>
struct DOB
    {
        int dd;
        int mm;
        int yy;
    };
    struct DOB*ptr;
void main()
{


    struct student{
    int roll_no;
    char name[50];
    int subj[4];
    struct DOB date;
    };
    struct student std;
    ptr=(struct student*)malloc(sizeof(struct student));
    printf("Enter Roll Number:");
    scanf("%d",&std.roll_no);
    printf("Enter Name: ");
    scanf("%s",&std.name);

   for(int i=0;i<4;i++){
    printf("Enter Subject %d Mark: ",i+1);
    scanf("%d",&std.subj[i]);
   }
    printf("Enter DOB:");
    scanf("%d %d %d",&ptr->dd,&ptr->mm,&ptr->yy);
    printf("***Student Information***\n");
    printf("Roll Number:%d",std.roll_no);
    printf("\nName:%s\n",std.name);

    for(int i=0;i<4;i++)
    {
        if(std.subj[i]>=80){
           printf("Subject %d Mark:%d\t Grade-A\n",i+1,std.subj[i]);
        }
        else if(std.subj[i]>=60){
             printf("Subject %d Mark:%d\t Grade-B\n",i+1,std.subj[i]);
        }
        else if(std.subj[i]>=40){
            printf("Subject %d Mark:%d\t Grade-C\n",i+1,std.subj[i]);
        }
        else if(std.subj[i]>=0){
             printf("Subject %d Mark:%d\t Grade-D\n",i+1,std.subj[i]);
        }
    }
    printf("DOB:%d %d %d",ptr->dd,ptr->mm,ptr->yy);
}
