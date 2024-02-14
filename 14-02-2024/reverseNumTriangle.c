#include<stdio.h>

int main()
{
    int n,row,col;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    char ch;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
            printf("  ");

        ch='a';
        for(col=1;col<=row;col++)
            printf("%c ",ch++);


        printf("\n");
    }
    return 0;
}
