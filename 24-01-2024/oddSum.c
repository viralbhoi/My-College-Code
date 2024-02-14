/* calculator*/

#include<stdio.h>

int main()
{
    int n,count=1,current=1, sum=0;
    printf("enter n : ");
    scanf("%d",&n);

    while(count<=n)
    {
        sum = sum + current;
        current = current + 2;
        count++;
    }

    printf("The sum of first %d odd number is %d\n",n,sum);

    return 0;
}
