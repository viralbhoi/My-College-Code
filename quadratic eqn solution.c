/* Read coefficient of quadratic equation from user. If possible find the real solution of equation. else print no solution. */

#include<stdio.h>

int main()
{
    int a,b,c,D;
    float r1, r2;

    printf("Enter  a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==0)
    {
        printf("Not a quadratic Equation !\n");
        return 0;
    }

    D=b*b-4*a*c;

    if(D==0){
        r1 = -b/(2*a);
        printf("The only Solution of this equation is %f \n", r1);
    }
    else if (D>0)
    {
        r1 = (-b + sqrt(D))/ (2*a);
        r2 = (-b - sqrt(D))/ (2*a);

        printf(" the solution of the equations are %f and %f \n", r1, r2);
    }
    else
        printf("No real solutions are possible !");


    return 0;
}
