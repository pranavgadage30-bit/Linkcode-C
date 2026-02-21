#include<stdio.h>

int main(){

    int num1 ,num2;

    printf("Enter the two numbers:");
    scanf("%d%d",&num1,&num2);

    if( num1>num2){
        printf("The %d is greater than %d",num1,num2);
    }

    else if (num2>num1){
        printf("The %d is greater than %d",num2,num1);
    }
    else if (num1==0 || num2==0){
        printf("One of the numbers is zero");
    }
    else{
        printf("Both numbers are equal");
    }

}