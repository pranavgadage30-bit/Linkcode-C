#include<stdio.h>

int main(){

    int i,j,k;
    int mat1[2][3],mat2[3][4],mat3[2][4]={0};

    printf("Enter elements in matrix1\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter elements in matrix2\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(k=0;k<4;k++){
            for(j=0;j<3;j++){
                mat3[i][k]=mat3[i][k]+(mat1[i][j]*mat2[j][k]);
            }
        }
    }

    printf("\n--------MULTIPLICATION OF MATRIX------------\n");
    for(i=0;i<2;i++){
        for(k=0;k<4;k++){
            printf("%5d",mat3[i][k]);
        }
        printf("\n");
    }
}
