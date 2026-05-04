#include<stdio.h>
void main()
{
    int newroll_no,n,pos,org;
    float newfees;
    char new_name[50],new_DOB[10];
    struct students{
    int roll_no;
    float fees;
    char name[20];
    char DOB[10];
    };
    printf("Enter number of student");
    scanf("%d",&n);
    org=n;
    struct students std[n];
    for(int i=0;i<n;i++){
        printf("Enter roll number:");
    scanf("%d",&std[i].roll_no);
        printf("Enter name:");
        scanf("%s",&std[i].name);
        printf("Enter the fees:");
        scanf("%f",&std[i].fees);
        printf("Enter the DOB:");
        scanf("%s",&std[i].DOB);

    }
    for(int i=0;i<n;i++){
            printf("********DETAILS OF STUDENT%d********\n",i+1);
        printf("ROLL No.=%d\n",std[i].roll_no);

        printf("NAME =%s\n",std[i].name);

        printf("FEES =%f\n",std[i].fees);

        printf("DOB =%s\n",std[i].DOB);


    }
    printf("Enter the student number whose record has to be edited :");
    scanf("%d",&pos);
    n=pos-1;
    printf("Enter the new roll number:");
    scanf("%d",&newroll_no);
    std[n].roll_no=newroll_no;
    printf("Enter the new name:");
    scanf("%s",new_name);
    strcpy(std[n].name,new_name);
    printf("Enter the new fees:");
    scanf("%f",&newfees);
    std[n].fees=newfees;
    printf("Enter the new DOB:");
    scanf("%s",new_DOB);
    strcpy(std[n].DOB,new_DOB);

     for(int i=0;i<org;i++){
            printf("********DETAILS OF STUDENT%d********\n",i+1);
        printf("ROLL No.=%d\n",std[i].roll_no);

        printf("NAME =%s\n",std[i].name);

        printf("FEES =%f\n",std[i].fees);

        printf("DOB =%s\n",std[i].DOB);


    }
}
