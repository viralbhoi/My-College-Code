#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    for(int i=1;i<=n-1;i++)
    {
        for(int j=0; j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }

    printf("Sorted Array : \n");

     for(int i=0;i<n;i++)
        printf("%d  ",a[i]);

    return 0;

}
