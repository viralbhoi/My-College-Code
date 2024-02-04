/* Read three no from user. and find maximum of these three numbers */

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("please enter a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("The largest no. is %d\n", a);
        }
        else
        {
            printf("The largest no. is %d\n", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("The largest no. is %d\n", b);
        }
        else
        {
            printf("The largest no. is %d\n", c);
        }
    }

    return 0;
}