#include<stdio.h>

int main(){

    int num;

    printf("Enter the number:");
    scanf("%d",&num);

    if(num % 3==0 && num %5==0){
        printf("The number is divided by 3 and 5");
    }
    else if(num % 3 ==0){
        printf("The number is divided by only 3");
    }
    else if(num % 5 ==0){
        printf("The number is divided by only 5");
    }
    else{
        printf("The number is not divided by 3 and 5");
    }

}