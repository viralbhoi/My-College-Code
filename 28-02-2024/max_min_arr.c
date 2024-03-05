#include<stdio.h>


int main()
{
    int n;
    printf("How many num you want : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    int currMax=a[0];
    int currMin=a[0];
    int maxIndex=0;
    int minIndex=0;

    for(int i=1;i<n;i++)
    {
        if (a[i]>currMax)
        {
             currMax=a[i];
             maxIndex=i;
        }


            if(a[i]<currMin)
            {
                 currMin=a[i];
                 minIndex=i;
            }

    }

    printf("Maximum number is a[%d] = %d\n",maxIndex, currMax);
    printf("Minimum number is a[%d] = %d\n",minIndex, currMin);


    return 0;
}
