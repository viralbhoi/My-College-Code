#include<stdio.h>

int fact(int i)
{
    if(i==1 || i==0)
    {
        return 1;
    }
       return i*fact(i-1);

}

int main()
{
    int n,row,col,result;
    printf("Enter the no of rows : ");
    scanf("%d",&n);


    for(row=0;row<=n;row++)
    {
        for(col=0;col<=n-row-1;col++)
            printf(" ");


        for(col=0;col<=row;col++)
        {
            result = fact(row)/(fact(row-col)*fact(col));
            printf("%d ",result);
        }
        printf("\n");
    }
    return 0;
}
