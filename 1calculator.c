#include<stdio.h>

int main(){

    int num1,num2,add,sub,mul;
    float div;

    printf("Enter any two numbers:");
    scanf("%d%d",&num1,&num2);

    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=(float)num1/num2;

    printf("\nAdd of %d and %d is %d:",num1,num2,add);
    printf("\nSub of %d and %d is %d:",num1,num2,sub);
    printf("\nMul of %d and %d is %d:",num1,num2,mul);
    printf("\nDiv of %d and %d is %f:",num1,num2,div);
}