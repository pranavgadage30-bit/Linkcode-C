#include<stdio.h>

int main(){
    
    int arr[3][3];
    int i,j;
    

    printf("Enter elements in array:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<3;i++){
        int sum=0;
        for(j=0;j<3;j++){
            if(i==j){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
