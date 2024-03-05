#include<stdio.h>
#include<stdbool.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    bool isPrime = true;

    for(int div=2; div<num; div++)
    {
        if(num%div==0)
        {
            isPrime=false;
            break;
        }
    }

    if(isPrime)
        printf("It is Prime Number !");
    else
        printf("Non-Prime Number !");

    return 0;
}
