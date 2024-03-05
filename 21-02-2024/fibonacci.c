#include<stdio.h>

int main()
{
    int a0=0;
    int a1=1,a2;

    int n;
    printf("Enter the no. of term do you want : ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",a0);
    }
    if(n>=2)
    {
        printf("%d, %d",a0,a1);
    }

    for(int i=3; i<=n ;i++)
    {
        a2=a1+a0;
        printf(", %d",a2);
        a0=a1;
        a1=a2;
    }
    return 0;
}
