#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,count=0;
    char str[100];
    printf("Enter a string=");
    fgets(str,100,stdin);

    while(str[i]!='\0')
    {
        if(str[i]=='t')
        {
            if(str[i+1]=='h' && str[i+2]=='e')
            {
                count++;
            }

        }
        i++;
    }
    printf("the is present %d times",count);
}
