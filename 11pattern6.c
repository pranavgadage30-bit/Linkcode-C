#include<stdio.h>

int main(){
    int n=4,i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i%2==0){
                printf("4");
            }
            else{
                printf("2");
            }
        }
        printf("\n");
    }
}

//2222 4444 2222 4444