int main(){

    int i,j,n=4;

    for(i=4;i>=1;i--){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}
