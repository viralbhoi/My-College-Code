#include<stdio.h>
#include<string.h>

int main()
{
    int i;

    char str1[100],str2[50],str3[100],str4[50];

    printf("enter 1st string : ");
    scanf("%s",str1);
    int j=0;
    printf("enter 2nd string : ");
    scanf("%s",str2);

    //without inbuilt:

    for(int i=strlen(str1);i<=strlen(str1)+strlen(str2);i++)
        {
                str1[i]=str2[j];
                j++;
        }
        printf("After concatination without inbuilt function : %s\n",str1);

    //with inbuilt
    printf("enter 3rd string : ");
    scanf("%s",str3);
    printf("enter 4th string4 : ");
    scanf("%s",str4);

    strcat(str3,str4);
    printf("After concatination without inbuilt function : %s\n",str3);


    return 0;

}
