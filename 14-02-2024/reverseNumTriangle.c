#include<stdio.h>

int main()
{
    int n,row,col;
    printf("Enter the no of rows : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
            printf("  ");

        for(col=1;col<=row;col++)
            printf("%c ",col % 10);


        printf("\n");
    }
    return 0;
}
