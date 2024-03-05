#include<stdio.h>

int main()
{
    int a,b,flag=0;
    printf("Enter the number : ");
    scanf("%d%d", &a,&b);
    printf("Prime number between %d & %d \n",a,b);

    for(int num=a;num<=b; num++)
    {
        
        if(num==2)
            printf("%d\n",2);

        for(int div=2; div<num; div++)
        {
            flag =1;
            if(num%div==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
            printf("%d\n",num);
    }

    return 0;
}
