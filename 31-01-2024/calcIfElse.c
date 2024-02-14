#include<stdio.h>
#include<conio.h>

int main()
{
    float a,b,ans;
    char op;

    printf("enter a & b :");
    scanf("%f%f", &a, &b);

    printf("enter operator : ");
    /*
    scanf("%c", &op);
    op=getchar();
    */
    op= getche();
    if(op=='+')
        ans = a+b;    
    else if(op=='-')
        ans=a-b;
    else if(op=='*')
        ans=a*b;
    else if(op=='/')
    {
        if(b==0)
        {
            printf("\nb can't zero for division");
            return 0;
        }
        else
            ans = a/b;
    }
    else{
        printf("\nEnter a valid operator");
        return 0;
    }

    printf("\nthe answer is %.2f",ans);
    
    return 0;
}