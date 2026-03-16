int main(){

    int i,j,k,n=4;

    for(i=1;i<=4;i++){
        for(k=n-i;k>0;k--){
            printf(" ");
        }
    
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
} 
    for(i=n-1;i>=1;i--){
        for(k=n-i;k>0;k--){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
       
        printf("\n");
    }
