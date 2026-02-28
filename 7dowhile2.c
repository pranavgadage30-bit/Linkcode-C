#include<stdio.h>

int main(){
    int i=1;
    int sum;

    do{
        if(i%2==0 && i%4==0)
        {
            sum+=i;
        }
        i++;
    }
    while(i<=100);
    printf("%d",sum);
}