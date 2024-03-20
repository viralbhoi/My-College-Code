#include<stdio.h>


int main()
{
    int rowA,colA,rowB,colB;
    printf("enrer row & col of A : ");
    scanf("%d%d",&rowA,&colA);
    printf("enrer row & col of B : ");
    scanf("%d%d",&rowB,&colB);
    if(rowA!=rowB || colA!=colB){
        printf("order should be same for addition!\n");
        return 0;
    }
    int A[rowA][colA],B[rowA][colA],C[rowA][colA];
    printf("\nEnter A:\n");
    for(int i=0;i<rowA;i++){
        for(int j=0;j<colA;j++){
            printf("A[%d][%d]= : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEnter B:\n");
    for(int i=0;i<rowA;i++){
        for(int j=0;j<colA;j++){
            printf("B[%d][%d]= : ",i,j);
            scanf("%d",&B[i][j]);

            C[i][j]=A[i][j] + B[i][j];
        }
    }

    printf("\n\nAnswer is \n\n");

    for(int i=0;i<rowA;i++){
        for(int j=0;j<colA;j++)
            printf("%d ",C[i][j]);

        printf("\n");
    }

}
