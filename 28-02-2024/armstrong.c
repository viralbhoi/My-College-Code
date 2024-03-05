#include<stdio.h>


int main()
{
    int count=0;
    int rem = 0;
    int num,sum=0;
    printf("enter the num :");
    scanf("%d",&num);

    int temp = num;
    int tempNum = num;
    int len;

    do
    {

        len = tempNum/10;
        tempNum/=10;
        count++;
    }while(len!=0);


    while(num>0)
    {
        int rem = num%10;
        sum += pow(rem,count);
        num/=10;
    }

    if (sum == temp)
            printf("IS ARMSTRONG");
    else
         printf("NOT ARMSTRONG");

    return 0;
}
