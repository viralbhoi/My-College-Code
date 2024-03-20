#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[50];
    printf("enter string : ");
    scanf("%[^\n]s",str);
    printf("The length is : \n\n");

    //without inbuilt function;
    for(i=0;str[i];i++);
    
    printf("Without inbuilt function : %d.\n",i);

    //with inbuilt function;
    int length=strlen(str);
    printf("With inbuilt function : %d.\n",length);

    return 0;

}
