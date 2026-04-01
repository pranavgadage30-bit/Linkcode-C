#include<stdio.h>

int main(){
    
    int arr[3][3];
    int i,j;
    
    printf("Enter elements in array:\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Row sums are:\n");
    
    for(i=0;i<3;i++){
        int sum=0;   // reset sum for each row
        
        for(j=0;j<3;j++){
            sum = sum + arr[i][j];   // ADD elements
        }
        
        printf("Sum of row %d = %d\n", i+1, sum);
    }

    return 0;
}
