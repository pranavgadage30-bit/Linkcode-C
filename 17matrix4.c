#include<stdio.h>

int main(){

    int i,j,arr[3][3];
    
    printf("Enter the elements in array:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\n--------Matrix-----------\n");

    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            printf("%d ",arr[i][j]);
        
        }
        printf("\n");
    }

}
