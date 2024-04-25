#include<stdio.h>

double xPowY(double x,int y);

int main(){
    double x;
    int y;
    printf("Enter Base : ");
    scanf("%Lf",&x);
    printf("Enter Power : ");
    scanf("%d",&y);
    if(y<0){
        printf("n should be positive integer");
        return 0;
    }

    printf("%Lf ^ %d = %Lf",x,y,xPowY(x,y));
}

double xPowY(double x,int y){
    double res=1;
    for(int i=1;i<=y;i++){
        res*=x;
    }
    return res;
}
