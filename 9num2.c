#include<stdio.h>

int main(){

    int num=154;
    int sum=0;

    while(num>0){
    int digit=num%10;
    sum=sum+digit;
    num=num/10;
    }
    printf("sum:%d",sum);
}