/* calculator*/

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

    switch(op)
    {
    case '+' :
        ans=a+b;
        break;
    case '-' :
        ans=a-b;
        break;
    case '*' :
        ans=a*b;
        break;
    case '/' :
        if(b==0)
        {
            printf("\nb can't zero for division");
            return 0;
        }
        else
        {
            ans = a/b;
            break;
        }
    default:
        printf("\nEnter valid operator");
        return 0;
    }

    printf("\n%.2f", ans);

    return 0;
}
