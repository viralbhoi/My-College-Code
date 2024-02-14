/* calculator*/

#include<stdio.h>

int main()
{
    int n,count=1,fact=1;
    printf("enter n : ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("must input positive integer !\n");
        return 0;
    }
    else if(n==0)
    {
        printf("The Factorial is %d \n",fact);
        return 0;
    }

    while(count<=n)
    {
        fact=fact*count;
        count++;
    }

    printf("The Factorial is %d \n", fact);
    return 0;
}
