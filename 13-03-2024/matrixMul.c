#include<stdio.h>


int main()
{
    int m,n,p,q;
    printf("enter row & col of A : ");
    scanf("%d%d",&m,&n);
    printf("enter row & col of B : ");
    scanf("%d%d",&p,&q);
    if(n!=p){
        printf("n & p should be same for mul.!\n");
        return 0;
    }
    int A[m][n],B[n][q],C[m][q];
    printf("\nEnter A:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("A[%d][%d]= : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEnter B:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            printf("B[%d][%d]= : ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("\n\nAnswer is \n\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            C[i][j]=0;
            for(int k=0;k<n;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++)
            printf("%d  ",C[i][j]);

        printf("\n");
    }

}
