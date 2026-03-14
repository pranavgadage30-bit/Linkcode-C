#include<stdio.h>

int main(){
    int i, j , k, n,m;
    n=4,m=4;
    for(i=1;i<=n; i++){
        for(k=n-i; k>0; k--){
            printf(" ");
        }
    for(j=1;j<=i;j++){
        printf("%d",m);
        
    }
    m--;
    printf("\n");
    }
}
