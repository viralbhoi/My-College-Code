#include<stdio.h>

int main()
{
    int n,row,col;
    printf("Enter the no of rows : ");
    scanf("%d",&n);


    for(row=0;row<=n;row++)
    {
        for(col=0;col<=n-row-1;col++)
            printf(" ");


        for(col=row;col>=0;col--)
            printf("%d",col%10);

        for(col=1;col<=row;col++)
            printf("%d",col%10);


        printf("\n");
    }
    return 0;
}
