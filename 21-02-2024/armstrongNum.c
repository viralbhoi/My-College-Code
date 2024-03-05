#include<stdio.h>

int main()
{
    for(int num = 100; num<1000; num++)
    {
        int t = num%10;
        int s = (num/10) % 10;
        int f = num/100;

        int sum = f*f*f + s*s*s + t*t*t;

        if(sum==num)
            printf("%d\n", num);

        /*

        */
    }
    return 0;
}
