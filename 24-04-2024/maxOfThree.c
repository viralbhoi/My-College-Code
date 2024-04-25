#include<stdio.h>

int maxOfThree(int a,int b,int c);

int main()
{
    int a,b,c;
    printf("Enter A,B,C : ");
    scanf("%d%d%d",&a,&b,&c);

    printf("Maximum number is %d",maxOfThree(a,b,c));
}

int maxOfThree(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }else if(b>=a && b>=c){
        return b;
    }else{
        return c;
    }
}