#include<stdio.h>

void swap(int a,int b);
void swapAdd(int *a,int *b);


int main()
{
    int a,b;
    printf("Enter a &b: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("Swappint without Address a = %d & b = %d.\n",a,b);
    swapAdd(&a,&b);
    printf("Swapping using pointer a = %d & b = %d.\n",a,b);

}

void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
}

void swapAdd(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}