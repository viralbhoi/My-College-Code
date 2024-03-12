#include<stdio.h>
#include<string.h>

int main()
{
    int i;

    char str1[50],str2[50],str3[50];

    printf("enter string : ");
    scanf("%[^\n]s",str1);
    
    printf("Original string is : %s\n\n",str1);
    printf("Copied strings are : \n\n");

    //without inbuilt function:
    for(int i=0;i<=strlen(str1);i++)
        str2[i]=str1[i];

    printf("without Inbuilt function : %s\n",str2);

    //with inbuilt function:
    strcpy(str3,str1);
    printf("with Inbuilt function : %s\n",str3);

    return 0;

}
