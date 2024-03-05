#include<stdio.h>

int fact(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    double deg;
    scanf("%ld",&deg);
    double rad = 3.14159 * deg /180;

    double cosine=0;
    int i=1;
    int count=0;

    while(count<7){
        cosine += pow(-1,i+1)*pow(rad)/fact(i);
        i+=2;
        count++;
    }

    printf("%ld",cosine);
}
