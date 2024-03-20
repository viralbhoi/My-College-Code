#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50],s2[50];
    printf("Enter the string : ");
    gets(s1);
    strcpy(s2,s1);
    strrev(s1);

    if(!(strcmp(s1,s2)))
        printf("It is Palindrome !\n");
    else
         printf("It is not a Palindrome !\n");
}
