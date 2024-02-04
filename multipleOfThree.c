/* calculator*/

#include<stdio.h>

int main()
{
    int sum=0;

    for(int i=100; i<=200; i++)
    {
        if(i%3==0)
            sum+=i;
    }
    printf("The sum of 3's multiple are : %d", sum);
    return 0;
}
