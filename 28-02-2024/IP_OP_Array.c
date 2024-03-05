#include<stdio.h>


int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++)
        printf("The value of a[%d] is %d\n",i,a[i]);

    return 0;
}
