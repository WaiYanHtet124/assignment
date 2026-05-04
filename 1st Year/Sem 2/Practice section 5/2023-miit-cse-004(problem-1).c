#include<stdio.h>
void stringcpy(char dest1 [], char source1[]);
void strcat(char dest2[], char source2[]);
void main()
{
    char dest1 [100], source1[100],dest2[100],source2[100];
    printf("Enter source string 1: \n");
    gets(source1);
    stringcpy(dest1,source1);
    printf("String copied. Destination string 1 is now \"%s\"\n",dest1);

     printf("Enter destination string 2 \n");
    gets(dest2);
    printf("Enter source string 2\n ");
    gets(source2);

    strcat(dest2,source2);
    printf("Strings joined. The joined string is now\"%s\"",dest2);

}
void stringcpy(char dest1 [], char source1[])
{
    int i=0;
    while(source1[i]!='\0'){
        dest1[i]=source1[i];
        i++;


    }
    dest1[i]='\0';

}

void strcat(char dest2[], char source2[])
{
    int i=0, n=strlen(dest2);
    dest2[n]=' ';
    while(source2[i]!='\0'){
        dest2[n+1]=source2[i];
        i++;
        n++;
    }
dest2[n+1]='\0';

}
