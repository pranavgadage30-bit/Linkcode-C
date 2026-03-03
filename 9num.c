#include<stdio.h>

int main(){

    int num=154;

    while(num>0){
        int digit=num%10;
        printf("%d\n",digit);
        num=num/10;
    }
}