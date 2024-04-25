#include<stdio.h>

int fact(int n);
int factR(int n);


int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    if(n<0){
        printf("n should be positive integer");
        return 0;
    }

    printf("Factorial without using recurssion : %d.\n",fact(n));
    printf("Factorial using recurssion : %d.\n",factR(n));

}

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}

int factR(int n){
    if(n==0)
        return 1;

    return n*factR(n-1);
}
