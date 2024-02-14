/* Print the sum of multiple of 3 between 100 to 200 both inclusive*/

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
