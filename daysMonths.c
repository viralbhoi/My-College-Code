#include<stdio.h>

int main()
{

    int day;

    printf("Enter the no. days : ");
    scanf("%d",&day);

    printf("No. of months are %d\n",day/30);
    printf("No. of Days are %d\n",day%30);

    return 0;
}
