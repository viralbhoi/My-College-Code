#include<stdio.h>


int main()
{
    int n;
    printf("How many num you want : ");
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d] : ",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    float avg = (sum*1.0)/n;
    printf("the average is %f", avg);



    return 0;
}
