
 #include<stdio.h>

int main(){

    int i,j,k,n=4;
    char ch=97;

    for(i=1;i<=4;i++){
        for(k=n-i;k>0;k--){
            printf(" ");
        }
    
    for(j=1;j<=2*i-1;j++){
        printf("%c",ch);
    }
    ch++;
    printf("\n");
} 

    for(i=n-1;i>=1;i--){
        for(k=n-i;k>0;k--){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%c",ch);
        }
        ch--;
       
        printf("\n");
    }
 }
