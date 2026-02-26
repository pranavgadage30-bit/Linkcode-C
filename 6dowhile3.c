#include<stdio.h>

int main(){

    int a=1;
    int sum=0;

    do{
        if(a%2==0)
        {
            sum+=a;
        }
        a++;
    }
    while(a<=100);
    printf("%d",sum);
}