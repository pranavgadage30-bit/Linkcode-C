#include<stdio.h>

int main(){
    
    int i,j;
    int mat1[3][3],mat2[3][3],matadd[3][3];
    int arr[3][3];
    
    printf("Enter elements in matrix 1:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    
    printf("Enter elements in matrix2:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    
    printf("\n-----Addition of matrix is-------\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matadd[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d ",matadd[i][j]);
        }
        printf("\n");
    }
}
