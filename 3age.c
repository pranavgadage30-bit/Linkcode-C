#include<stdio.h>

int main(){

    int age;

    printf("Enter the age;");
    scanf("%d",&age);

    if (age>=100){
        printf("Age is invalid");
    }

    else if (age>=18){
        printf("You are major");
    }
    else if(age>=0){
        printf("You are minor");

    }
    else if (age<0){
        printf("Age is invalid");
    }
}