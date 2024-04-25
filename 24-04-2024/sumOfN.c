#include<stdio.h>

int sumOfN(int n);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    if(n<0){
        printf("n must be positive integer");
    }
    printf("The sum of first %d natural number is %d",n,sumOfN(n));

}

int sumOfN(int n){
    return (n*(n+1)/2);
}