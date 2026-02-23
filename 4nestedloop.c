#include<stdio.h>

int main(){

    int num;

    printf("Enter the number:");
    scanf("%d",&num);

    if (num>0){
        if (num%2==0){
            printf("Nmber is even");
        } else{
            printf("Number is odd number");
        }
    }
    else if (num<0){
        printf("Number is negative");
    }
    else{
        printf("Number is zero");
    }
}