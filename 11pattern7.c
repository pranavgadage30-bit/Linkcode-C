#include<stdio.h>

int main(){
    int n=4,i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j%2==0){
                printf("6");
            }
            else{
                printf("3");
            }
        }
        printf("\n");
    }
}

//3636 3636 3636 3636