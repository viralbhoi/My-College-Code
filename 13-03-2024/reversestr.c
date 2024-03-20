#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    printf("Enter the string : ");
    gets(s);


    strrev(s);
    printf("%s\n",s);
}
