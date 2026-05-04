#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter a string=");
    gets(str);
    arrange(str);
    printf("Reverse string=");
    puts(str);


}
void reverse(char *str,int start,int end)
{
    char temp;
    while(start<end)
    {
       temp=str[start];
       str[start]=str[end];
       str[end]=temp;
       start++;
       end--;
    }
}
void arrange(char *str)
{
    int len=strlen(str);
    int start=0,end=len-1,i;
    reverse(str,start,end);
    for(i=0;i<=len;i++)
    {
        if(str[i]=='\0' || str[i]==' ')
        {
            reverse(str,start,i-1);
            start=i+1;
        }
    }
}
